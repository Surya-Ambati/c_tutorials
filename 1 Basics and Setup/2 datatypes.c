/*
===========================================================
                GCC -GNU complier collection
===========================================================
GCC developed by GNU project.

GNU C Compiler --> GNU Compiler Collection (C, C++, Objective-c, Fortran, Go etc).

===========================================================
                DATA TYPES IN C
===========================================================
1) Basic/Primary : int, char, float, double
2) Derived : array, pointer, structure, union
3) Enumeration : enum
4) Void : void


===========================================================
                PRIMARY DATA TYPES IN C
===========================================================

Primary Data Type
|
|-- Character
|     |-- char
|     |-- signed char
|     |-- unsigned char
|
|-- Integer
|     |-- signed
|     |     |-- int
|     |     |-- short int
|     |     |-- long int
|     |
|     |-- unsigned
|           |-- unsigned int
|           |-- unsigned short int
|           |-- unsigned long int
|
|-- Float
|     |-- float
|     |-- double
|     |-- long double
|
|-- void

===========================================================
*/

/*
==============================================================================
        SIZE AND RANGES OF DATA TYPES WITH TYPE QUALIFIERS
==============================================================================

-----------------------------------------------------------------------------------------------
| Type                         | Size (bytes) | Range                              | Format
                                                                                     specifiers |
-----------------------------------------------------------------------------------------------
| char / signed char           | 1            | -128 to 127                        | %c     |
| unsigned char                | 1            | 0 to 255                           | %c     |
-----------------------------------------------------------------------------------------------
| int / signed int             | 2            | -32768 to 32767                    | %d/%i  |
| unsigned int                 | 2            | 0 to 65535                         | %u     |
-----------------------------------------------------------------------------------------------
| short int / signed short int | 1            | -128 to 127                        | %d/%i  |
| unsigned short int           | 1            | 0 to 255                           | %u     |
-----------------------------------------------------------------------------------------------
| long int / signed long int   | 4            | -2147483648 to 2147483647          | %ld    |
| unsigned long int            | 4            | 0 to 4294967295                    | %lu    |
-----------------------------------------------------------------------------------------------
| float                        | 4            | 3.4E-38 to 3.4E+38                 | %f/%g  |
| double                       | 8            | 1.7E-308 to 1.7E+308               | %lf    |
| long double                  | 10           | 3.4E-4932 to 1.1E+4932             | %Lf    |
-----------------------------------------------------------------------------------------------
| string                       |  -           | -                                  | %s     |
-----------------------------------------------------------------------------------------------
size_t - z
short - h
char - hh
long - l
long long - ll
long double - f

Note:
Actual size may vary depending on system and compiler.
Use sizeof() to check exact size in your system.

Example:
    printf("%lu", sizeof(int));


%zu ==> % -start, z - modifer, u - format specifier    
==============================================================================

for reference or address of variable , need to use format specifer - %p
*/

#include<stdio.h>

int main(){
    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof(unsigned char));
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(int));
    printf("%lu\n", sizeof(int)); // %lu works in linux , zu works in windows.


    return 0;
}