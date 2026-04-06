#include<stdio.h>
#include "utlity_file.h"



int main(){
    int x = 10;
    int y = 25;
    int z = add_variables(x,y);
    printf("output of x and y addition - %d\n", z);
}