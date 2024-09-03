# cpp-review-10

Value of object stored as sequence of bits/data type of object tells compiler how to interpret bits, if value of one type stored in object of another type have to do conversion, can be implicit or explicit
Implicit type conversion performed automatically by compiler when one data type required/different type supplied (ex. int value stored in double variable), can be initial assignment/function return/parameter/etc., compiler does automatically if suitable conversion can be found, else fails with compile error
Numeric promotion turns narrower numeric type into wider numeric type (more bits), value preserving/safe conversion creates equal value of destination type (all numeric promotions do), integral promotions promote float to double, integral promotions promote various types (bool, char, signed char, unsigned char, signed short, unsigned short) to int
Numeric conversions include converting integral type to another integral type (aside from integral promotions), converting floating point type to another floating point type (excluding floating point promotions), converting floating point type to integral type, converting integral type to floating point type, & converting integral/floating point type to bool
Safe conversion is one in which every value of source type can be converted to equal value of destination type, 