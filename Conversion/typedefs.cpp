#include <iostream>

int main()
{
    using Distance = double; // define Distance as an alias for type double
    typedef long Miles;

    Distance milesToDestination{ 3.4 }; // defines a variable of type double

    std::cout << milesToDestination << '\n'; // prints a double value

    return 0;
}