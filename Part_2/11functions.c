#include<stdio.h>

/*
return_type function_name(parameters) {
    // body
    return value; // optional
}
    */


int add(int a, int b) {
    return a + b;
}

// int main() {
//     int result = add(5, 3);
//     printf("Sum = %d", result);
//     return 0;
// }

// two type of functions

// Library functions → printf(), scanf()
// User-defined functions → created by you

// Pass by Value
// A copy of the variable is passed to the function, 
// Changes inside function DO NOT affect original variable

#include <stdio.h>

void modify(int x) {
    x = x + 10;
    printf("Inside function: %d\n", x);
}

// int main() {
//     int a = 5;
//     modify(a);
//     printf("Outside function: %d\n", a);
//     return 0;
// }

// Pass by Address (Using Pointers)
// Address of variable is passed, Changes DO affect original variable
#include <stdio.h>

void modify(int *x) {
    *x = *x + 10;
    printf("Inside function: %d\n", *x);
}

int main() {
    int a = 5;
    modify(&a);
    printf("Outside function: %d\n", a);
    return 0;
}

