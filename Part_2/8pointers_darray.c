#include<stdio.h>



int main(){

    int iarray[5] ={12,23,33,44,55};
    
    int *pi = iarray;
    printf("address of iarray - %p, %p, %p, %p, %p, %p\n", iarray, pi, &iarray, &(*pi), &(iarray[0]), &(pi[0]));
    printf("dereference or access value of iarray - %d, %d, %d, %d\n", iarray[0], *iarray, *pi, pi[0]);
    printf("arthematic pointer of iarray - %d, %d, %d, %d\n", *(iarray+2),iarray[2] ,pi[2], *(pi+2));


}