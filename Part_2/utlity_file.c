#include "utlity_file.h"
#include<stdio.h>


int add_variables(int a, int b){
    
    printf("added values - %d\n", a+b);
    return a+b;
}

static int s_add_variables(int a, int b){
    
    printf("added values - %d\n", a+b);
    return a+b;
}
