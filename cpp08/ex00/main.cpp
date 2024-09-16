#include "easyfind.hpp"
#include <list>
#include <vector>

int main()
{
    std::list<int> list;

    list.push_front(3);
    list.push_front(2);
    list.push_front(1);
    list.push_back(4);
    list.push_back(5);

    try
    {
        std::list<int>::iterator it;
        it = easyfind(list, 2);
        std::cout << "Element: " << *it << std::endl;
        it = easyfind(list, 20);
        std::cout << "Element: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::vector<int> vector;

    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    vector.push_back(4);
    vector.push_back(5);

    try
    {
        std::vector<int>::iterator it;
        it = easyfind(vector, 2);
        std::cout << "Element: " << *it << std::endl;
        it = easyfind(vector, 20);
        std::cout << "Element: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
