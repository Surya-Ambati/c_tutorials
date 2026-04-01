#include<stdio.h>
#include<stdlib.h>


//stack generally has less memory and decide by operating system and compiler
//limitations for stack memory - recursion function, large data allocate using array, rutime size allocation

// 1) malloc - memory allocation: just allocate memory block and no initilalize. so if we dereference will provide garbage value.
// 2) calloc - contiguous allocation: allocate & initialize memory ex: initializes with zero
// 3) realloc - reallocation: resize existing memory 
// 4) free - release allocated memory
// must use stdlib to call pointer functions. these libary already define null as : #define NULL ((void*)0)


int main(){

//  doesnt work in runtime for stack memory  
// int n;
// scanf("%d", &n);
// int arr[n];
//  (int*)malloc(n * sizeof(int));


int *ph;
ph = (int*)malloc(sizeof(int));
*ph = 50;
printf("address that holds by ph - %d\n", ph);
printf("address that contains value - %d\n", *ph);
free(ph);
ph = NULL;

}
