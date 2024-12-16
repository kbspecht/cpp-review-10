#include <iostream>

int main()
{
    int n { 5 };
    long l = n; // okay, produces long value 5

    short s { 5 };
    double d = s; // okay, produces double value 5.0

    n = static_cast<int>(static_cast<long>(3)); // convert int 3 to long and back
    std::cout << n << '\n';                         // prints 3

    char c = static_cast<char>(static_cast<double>('c')); // convert 'c' to double and back
    std::cout << c << '\n';                               // prints 'c'

    int u = static_cast<int>(static_cast<unsigned int>(-5)); // convert '-5' to unsigned and back
    std::cout << u << '\n'; // prints -5

    return 0;
}