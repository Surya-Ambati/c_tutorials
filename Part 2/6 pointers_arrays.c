#include<stdio.h>

//array stores in memory contiguously- meaning stores in memory address without gaps.

int main(){

    int abc_array[5]= {10,20,30,40,50};
    printf("calling array or base address - %p\n", abc_array);
    printf("first element in array address - %p\n", &abc_array[0]);
    printf("second element in array address - %p\n", &abc_array[1]);

    // int *pa = abc_array;
    // printf("pointer array address - %p\n", pa);

    printf("array first element %d, using pointer %d\n", abc_array[0], *abc_array);
    printf("array second element %d, using pointer %d\n", abc_array[1], *(abc_array+1));
    printf("array third element %d, using pointer %d\n", abc_array[2], *(abc_array+2));

}