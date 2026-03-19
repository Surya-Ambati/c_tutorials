/*

Decimal   Binary (8-bit representation)

0   → 00000000
1   → 00000001  
2   → 00000010  
3   → 00000011  
4   → 00000100  
5   → 00000101  
6   → 00000110  
7   → 00000111  
8   → 00001000  
9   → 00001001  
10  → 00001010  



Bit position and value:
Position:  7  6   5  4  3  2  1  0
Value:    128 64 32 16  8  4  2  1

0ne byte = 8 bits

suppose if we turn on all 1s:

Position: 7   6   5   4   3   2   1   0
Value:   128  64  32  16   8   4   2   1
Binary:    1   1   1   1   1   1   1   1

= 128 + 64 + 32 + 16 + 8 + 4 + 2 + 1 = 255

Example: conversion of number to binary:

303 ÷ 2 = 151 remainder 1
151 ÷ 2 = 75  remainder 1
75  ÷ 2 = 37  remainder 1
37  ÷ 2 = 18  remainder 1
18  ÷ 2 = 9   remainder 0
9   ÷ 2 = 4   remainder 1
4   ÷ 2 = 2   remainder 0
2   ÷ 2 = 1   remainder 0
1   ÷ 2 = 0   remainder 1

303 = 100101111


Binary:   1   0  0   1  0  1  1  1  1
Position: 8   7  6   5  4  3  2  1  0
Value:   256 128 64 32 16  8  4  2  1

total = 1+2+4+8+32+256 = 303

Stored in int (4 bytes = 32 bits)
00000000 00000000 00000001 00101111


Binary:    0  0   1  0  1  1  1  1
Position:  7  6   5  4  3  2  1  0
Value:    128 64 32 16  8  4  2  1

total = 1+2+4+8+32 = 47

Note: computre stores numbers as binary, characters as ASCII.
ASCII = a mapping (encoding) between characters and numbers

| Character | ASCII Decimal | Binary   |
| --------- | ------------- | -------- |
| '1'       | 49            | 00110001 |
| '2'       | 50            | 00110010 |
| 'A'       | 65            | 01000001 |
| 'a'       | 97            | 01100001 |


*/

