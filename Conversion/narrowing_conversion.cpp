#include <iostream>

void someFcn(int i)
{
}

void print(unsigned int u) // note: unsigned
{
    std::cout << u << '\n';
}

int main()
{
    double d{ 5.0 };

    someFcn(d); // bad: implicit narrowing conversion will generate compiler warning

    double x { 3.5 };

    // static_cast<int> converts double to int, initializes i with int result
    int i { static_cast<int>(x) };

    // good: we're explicitly telling the compiler this narrowing conversion is intentional
    someFcn(static_cast<int>(d)); // no warning generated

    std::cout << "Enter an integral value: ";
    int n{};
    std::cin >> n; // enter 5 or -5
    print(n);      // conversion to unsigned may or may not preserve value

    constexpr int n1{ 5 };   // note: constexpr
    unsigned int u1 { n1 };  // okay: conversion is not narrowing due to exclusion clause

    constexpr int n2 { -5 }; // note: constexpr
    //unsigned int u2 { n2 };  // compile error: conversion is narrowing due to value change

    return 0;
}