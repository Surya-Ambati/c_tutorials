#include<stdio.h>

//dont just declare pointer
// two ways to write pointers
// why pointer has strong types


// int *gp = NULL ; // for global pointers compiler assign null 

int main(){

      // int *p = NULL; //for local variable assign garabage value

    int xvariable = 303;

    int *lp = &xvariable; // one way to intiliaze pointer

    printf("%d\n", *lp);

    // int *lp;
    // lp = &xvariable; //antoerh way to intiliaze pointer


}
