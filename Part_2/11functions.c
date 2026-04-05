#include<stdio.h>

/*
return_type function_name(parameters) {
    // body
    return value; // optional
}
    */

int varibale_name = 12;    

int add_variables(int a, int b){
    
    printf("added values - %d\n", a+b);
    return a+b;
}


// int main() {

// int a = 10;
// int b = 20;
// int output = add_variables(a,b);
// printf("output value - %d\n", output);


// }



// two type of functions

// Library functions → printf(), scanf()
// User-defined functions → created by you

// Pass by Value
// A copy of the variable is passed to the function, 
// Changes inside function DO NOT affect original variable


void modify(int x) {
    x = x + 10;
    printf("Inside function: %d\n", x);
}

// int main() {
//     int a = 5;
//     modify(a);
//     printf("modify function: %d\n", a);
//     return 0;
// }



// Pass by Address (Using Pointers)
// Address of variable is passed, Changes DO affect original variable

void ref_modify(int *x){
    *x = *x +10;
    printf("modify inside func: %d\n", *x);
}

int main() {
    int a = 5;
    ref_modify(&a);
    printf("Outside function: %d\n", a);
    return 0;
}

