#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <sys/time.h>

class PmergeMe
{
    private:
        std::vector<int> _v;
        std::deque<int> _d;

        void _printContainer(char **av, int ac, double vTime, double dTime);
        bool _digitControl(char **av, int ac) const;
        template <typename T>
        void _FordJohnson(T &c);
        template <typename T>
        void _mergeSort(T &c, T &left, T &right);

    public:
        PmergeMe(/* args */);
        PmergeMe(char **av, int ac);
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        const std::vector<int> &getVector() const;
        const std::deque<int> &getDeque() const;
        ~PmergeMe();
};