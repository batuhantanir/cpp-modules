#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;

    return 0;
}

// int main()
// {
//     Fixed a(10);
//     Fixed b(20);
//     Fixed e = a + b;
//     std::cout << e.getRawBits() << std::endl;
// }


// int main(void)
// {
//     {
//         Fixed a;
//         Fixed b(10);
//         Fixed c(5.5f);
//         Fixed d(b);
//         Fixed e = d;
//         std::cout << "a: " << a.toFloat() << std::endl;
//         std::cout << "b: " << b.toFloat() << std::endl;
//         std::cout << "c: " << c.toFloat() << std::endl;
//         std::cout << "d: " << d.toFloat() << std::endl;
//         std::cout << "e: " << e.toFloat() << std::endl;
//     }

//     {
//         Fixed f(3.14f);
//         Fixed g(2.71f);
//         Fixed h, i, j, k;
//         h = f + g; // f = 5.85
//         i = f - g; // g = 0.43
//         j = f * g; // f = 8.51
//         k = f / g; // f = 1.16
//         std::cout << "h: " << h << std::endl;
//         std::cout << "i: " << i << std::endl;
//         std::cout << "j: " << j << std::endl;
//         std::cout << "k: " << k << std::endl;
//     }

//     {
//         Fixed l(3.14f);
//         Fixed m(2.71f);
//         Fixed n(3.14f);
//         std::cout << std::boolalpha;
//         std::cout << "l > m: " << (l > m) << std::endl;
//         std::cout << "l < m: " << (l < m) << std::endl;
//         std::cout << "l >= m: " << (l >= m) << std::endl;
//         std::cout << "l <= m: " << (l <= m) << std::endl;
//         std::cout << "l == m: " << (l == m) << std::endl;
//         std::cout << "l != m: " << (l != m) << std::endl;
//         std::cout << "l == n: " << (l == n) << std::endl;
//         std::cout << std::noboolalpha;
//     }

//     {
//         Fixed o;
//         Fixed const p(Fixed(5.05f) * Fixed(2));
//         std::cout << o << std::endl;
//         std::cout << ++o << std::endl;
//         std::cout << o << std::endl;
//         std::cout << o++ << std::endl;
//         std::cout << o << std::endl;
//         std::cout << p << std::endl;
//         std::cout << Fixed::max(o, p) << std::endl;
//         std::cout << Fixed::min(o, p) << std::endl;
//     }
//     return 0;
// }
