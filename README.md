# cpp-review-10

Value of object stored as sequence of bits/data type of object tells compiler how to interpret bits, if value of one type stored in object of another type have to do conversion, can be implicit or explicit
Implicit type conversion performed automatically by compiler when one data type required/different type supplied (ex. int value stored in double variable), can be initial assignment/function return/parameter/etc., compiler does automatically if suitable conversion can be found, else fails with compile error
Numeric promotion turns narrower numeric type into wider numeric type (more bits), value preserving/safe conversion creates equal value of destination type (all numeric promotions do), integral promotions promote float to double, integral promotions promote various types (bool, char, signed char, unsigned char, signed short, unsigned short) to int
Numeric conversions include converting integral type to another integral type (aside from integral promotions), converting floating point type to another floating point type (excluding floating point promotions), converting floating point type to integral type, converting integral type to floating point type, & converting integral/floating point type to bool
Safe conversion is one in which every value of source type can be converted to equal value of destination type, unsafe conversion is one in which at least one value of source type can't be converted into value of destination type
Value-preserving conversions are safe numeric conversions where destination type can represent all values of source type (ex. int to long), reinterpretive conversions are unsafe numeric conversions where converted value may be different than source value (ex. signed int to unsigned int), lossy conversions are unsafe numeric conversions where data may be lost (ex. double to int)
Narrowing conversion is potentially unsafe numeric conversion where destination type may not be able to hold all values of source type (ex. float to int), usually result in compiler warnings, try to avoid, if you can't make explicit using static_cast, sometimes source value of narrowing conversion isn't known until runtime/use constexpr
Arithmetic conversions necessary when operands not of same type (ex. 2+3.5), integral type/floating point type operation will be converted to floating point type, special cases for signed/unsigned
For explicit type conversion use type casting operator (cast), can be C-style cast ex. (double)x, static cast ex. static_cast<int>(x) that prevents certain dangerous conversions, const cast, dynamic cast, reinterpret cast
Using keyword creates alias for existing data type (ex. using Distance = double; Distance milesToDestination{3.4}; creates alias Distance for double), type alias defined in block has block scope/defined globally has global scope, useful for hiding platform specific details (ex. platforms with 2 byte vs 4 byte ints, use preprocessor directives to define type aliases for different platforms), can also use to simplify complex types ex. list of lists, can also use to reduce code maintenance (ex. stops you from having to change every instance of type from short to long)
Typedef is older way of creating alias for type (ex. typedef long Miles), largely replaced by type aliases at this point