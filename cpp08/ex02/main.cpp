#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}

// int main()
// {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
//     std::cout << "stack top : " << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout << "stack size : " << mstack.size() << std::endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     mstack.push(0);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();   
//     MutantStack<int>::reverse_iterator ritb = mstack.rbegin();
//     MutantStack<int>::reverse_iterator rite = mstack.rend();
//     MutantStack<int>::const_iterator citb = mstack.begin();
//     MutantStack<int>::const_iterator cite = mstack.end();
//     MutantStack<int>::const_reverse_iterator critb = mstack.rbegin();
//     MutantStack<int>::const_reverse_iterator crite = mstack.rend();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << "iterator : " << *it << std::endl;
//         ++it;
//     }
//     ++ritb;
//     --ritb;
//     while (ritb != rite)
//     {
//         std::cout << "reverse_iterator : " << *ritb << std::endl;
//         ++ritb;
//     }
//     ++citb;
//     --citb;
//     while (citb != cite)
//     {
//         std::cout << "const_iterator : " << *citb << std::endl;
//         ++citb;
//     }
//     ++critb;
//     --critb;
//     while (critb != crite)
//     {
//         std::cout << "const_reverse_iterator : " << *critb << std::endl;
//         ++critb;
//     }
//     return 0;
// }
