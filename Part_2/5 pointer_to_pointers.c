#include<stdio.h>

int main(){

    int abc = 303;

    printf("address of variable abc: %p, value: %d\n", &abc, abc);

    int *x = &abc;

    printf("x pointer contains - %p, x pointer dereference - %d\n", x, *x);
    printf("x pointer address - %p\n", &x);

    int **y = &x;;
    printf("y pointer to pointer contains - %p\n", y);
    printf("y pointer to pointer address - %p\n", &y);
    printf("y pointer to pointer of x  should contain abc address - %p\n", *y);
    printf("y pointer to pointer of x value contain abc value - %d\n", **y);

    int ***z = & y;


}
