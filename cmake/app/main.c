#include <stdio.h>
#include "math_lib.h"

int main(){
    printf("Programme started!!\n");
    int a = 6;
    int b = 7;
    int result = add_numbers(a, b);

    printf("Total of a and b: %d\n", result);

    return 0;
}