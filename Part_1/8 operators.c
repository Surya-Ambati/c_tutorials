#include<stdio.h>

int main(){
    int vara = 3;
    int varb = 8;
    int varc = 10;

    printf("%d\n",((varb>vara) && (varb<varc)));

    vara += 2; // vara = vara+2
    varc -= 2; // varc = varc-2;
    printf("value of a %d\n", vara);

    int vard = varb--;
    printf("value of d %d\n", vard);
    printf("value of b %d\n", varb);

    printf("result of a and b comparison: %s\n", ((varb>vara) && (varb<varc))?"yes":"no"); //ternaroy operator
    int spl_cast = (int) 4.5;
    printf("special cast result : %d\n", spl_cast);

    printf("size of variable a: %zu bytes\n",sizeof(vara));

    printf("address of variable b %p\n", &varb);
    

}



/*
operands ex: variable a, variable b.

Type of Operator,Symbol Examples,What it does:

Arithmetic,"+, -, *, /, %","Basic math (Addition, sub, multi, divide, modulus)"
Relational,"<, >, ==, !=","Compares two values (Greater than, Not equal to)"
Logical,"&&, ||, !",
Assignment,=,Assigns a value to a variable ex: += => a=a+5, -= => a=a-5
special uninary operators - ++, -- ex: prefix ++varb, postfix varb++ 
Bitwise,"&, `",", ^`"

*/
