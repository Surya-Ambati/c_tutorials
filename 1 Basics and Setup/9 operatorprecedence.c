#include<stdio.h>

int main(){

    int d = 7+3*10;
    printf("value of d %d\n", d);

    int e = 10/2*4;
    printf("value of e %d\n", e);


}





/*
 * =========================================================================
 * C OPERATOR PRECEDENCE
 * =========================================================================
 * Rank | Operator Category | Symbols                 | Associativity
 * -----|-------------------|-------------------------|---------------------
 * 1   | Highest           | (), [], ->, .            | Left-to-Right
 * 2   | Unary             | !, ++, --, (cast), sizeof| Right-to-Left
 * 3   | Multiplicative    | *, /, %                  | Left-to-Right
 * 4   | Additive          | +, -                     | Left-to-Right
 * 5   | Relational        | <, >, <=, >=             | Left-to-Right
 * 6   | Equality          | ==, !=                   | Left-to-Right
 * 7   | Logical AND       | &&                       | Left-to-Right
 * 8   | Logical OR        | ||                       | Left-to-Right
 * 9   | Assignment        | =, +=, -=, *=, /=, etc.  | Right-to-Left
 * =========================================================================
 */