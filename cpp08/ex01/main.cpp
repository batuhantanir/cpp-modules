#include "Span.hpp"
#include <cstdlib>
#include <ctime>

// int main()
// {
//     Span sp = Span(6);

//     try {
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);

//     std::vector<int> tmp;
//     tmp.push_back(5);
//     tmp.push_back(2);
//     tmp.push_back(-2);
//     sp.addNumber(tmp.begin(), tmp.end());

//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
//     }
//     catch (std::exception &err) {
//         std::cout << err.what() << std::endl;
//     }
//     return 0;
// }

// int main()
// {
//     Span sp = Span(10000);

//     try {
//         for (int i = 0; i < 10000; i++)
//             sp.addNumber(rand());
//         std::cout << sp.shortestSpan() << std::endl;
//         std::cout << sp.longestSpan() << std::endl;
//     }
//     catch (std::exception &err) {
//         std::cout << err.what() << std::endl;
//     }
//     return 0;
// }

// int main() {
//     Span sp = Span(1);

//     try {
//         sp.addNumber(5);
//         sp.addNumber(2);
//         sp.addNumber(1);
//     }
//     catch (std::exception &err) {
//         std::cout << err.what() << std::endl;
//     }
//     return 0;
// }

int main() {
    Span sp = Span(-3);

    try {
        sp.addNumber(5);
        sp.addNumber(2);
        sp.addNumber(1);
        sp.longestSpan();
        sp.shortestSpan();
    }
    catch (std::exception &err) {
        std::cout << err.what() << std::endl;
    }
    return 0;
}