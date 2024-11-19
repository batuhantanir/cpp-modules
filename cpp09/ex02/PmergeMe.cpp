#include "PmergeMe.hpp"

void PmergeMe::_printContainer(char **av, int ac, double vTime, double dTime) {
    std::cout << "Before: ";
    for (int i = 1; i < ac; i++)
        std::cout << av[i] << " ";
    std::cout << std::endl;

    std::cout << "After: ";
    for (std::vector<int>::iterator it = _v.begin(); it != _v.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Time to process a range of "
              << _v.size() << " elements with std::vector : "
              << vTime << " us" << std::endl;
    std::cout << "Time to process a range of "
              << _d.size() << " elements with std::deque : "
              << dTime << " us" << std::endl;

}

template <typename T>
void PmergeMe::_FordJohnson(T &c) {
    if (c.size() <= 1)
        return;

    T left;
    T right;
    size_t middle = c.size() / 2;

    for (size_t i = 0; i < middle; i++)
        left.push_back(c[i]);

    for (size_t i = middle; i < c.size(); i++)
        right.push_back(c[i]);

    _FordJohnson(left);
    _FordJohnson(right);
    _mergeSort(c, left, right);
}

template <typename T>
void PmergeMe::_mergeSort(T &c, T &left, T &right) {
    c.clear();
    typename T::iterator itLeft = left.begin();
    typename T::iterator itRight = right.begin();
    typename T::iterator itLeftEnd = left.end();
    typename T::iterator itRightEnd = right.end();

    while (itLeft != itLeftEnd && itRight != itRightEnd) {
        if (*itLeft < *itRight) {
            c.push_back(*itLeft);
            itLeft++;
        }
        else {
            c.push_back(*itRight);
            itRight++;
        }
    }

    while (itLeft != itLeftEnd) {
        c.push_back(*itLeft);
        itLeft++;
    }

    while (itRight != itRightEnd) {
        c.push_back(*itRight);
        itRight++;
    }
}

PmergeMe::PmergeMe(/* args */) {}

bool PmergeMe::_digitControl(char **av, int ac) const {
    double num;

    for (int i = 1; i < ac; i++) {
        num = std::atof(av[i]);
        if (num > 2147483647) {
            std::cout << "Error" << std::endl;
            return false;
        }

        for (int j = 0; av[i][j]; j++) {
            if (!isdigit(av[i][j]))
                if (av[i][j] != '+') {
                    std::cout << "Error" << std::endl;
                    return false;
                }
        }
    }
    return true;
}

PmergeMe::PmergeMe(char **av, int ac) {
    if (!_digitControl(av, ac))
        return;
    int num;
    for (int i = 1; i < ac; i++) {
        num = std::atoi(av[i]);
        _v.push_back(num);
        _d.push_back(num);
    }
    timeval start, end;
    gettimeofday(&start, NULL);
    _FordJohnson(_v);
    gettimeofday(&end, NULL);
    double vTime = (end.tv_sec - start.tv_sec) * 1000.0 + (end.tv_usec - start.tv_usec) / 1000.0;

    gettimeofday(&start, NULL);
    _FordJohnson(_d);
    gettimeofday(&end, NULL);
    double dTime = (end.tv_sec - start.tv_sec) * 1000.0 + (end.tv_usec - start.tv_usec) / 1000.0;

    _printContainer(av, ac, vTime, dTime);
}

PmergeMe::PmergeMe(const PmergeMe &other) {
    this->_v = other.getVector();
    this->_d = other.getDeque();
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
    this->_v = other.getVector();
    this->_d = other.getDeque();
    return *this;
}

PmergeMe::~PmergeMe() {}

const std::vector<int> &PmergeMe::getVector() const { return _v; }

const std::deque<int> &PmergeMe::getDeque() const { return _d; }