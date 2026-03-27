#include<stdio.h>
#include<stdlib.h>

//atoi - asci to integer.

int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("sum value of a and b - %d\n", a+b);

}