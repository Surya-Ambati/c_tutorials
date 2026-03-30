#include<stdio.h>



int main(){

    //1d array
    int iarray[5] ={12,23,33,44,55}; //contigenously - 105x,109x,113x...
    
    int *pi = iarray; //iarray[2] -33
    // iarray = pi - doesnot work in this way of declaration
    printf("address of iarray - %p, %p, %p, %p, %p, %p\n", iarray, pi, &iarray, &(*pi), &(iarray[0]), &(pi[0]));
    printf("dereference or access value of iarray - %d, %d, %d, %d\n", iarray[0], *iarray, *pi, pi[0]);
    printf("arthematic pointer of iarray - %d, %d, %d, %d\n", *(iarray+2),iarray[2] ,pi[2], *(pi+2));


    //2d array
    // int tda[2][2] = {{1,2},{3,4}};
    // // int *ptda[2] = tda; // ptda expects 2 int pointer
    // int (*ptda)[2] = tda; // ptda expects an array of 2 ints.

    // //3d array
    // int thda[2][2][2]= {{{1,2},{3,4}}, {{1,2},{3,4}} };
    // int (*pthda)[2][2] = thda;

     // 2d array

    int tdarray[2][3] = {{22,33,44},{55,66,77}};
    int (*ptdarray)[3] = tdarray;

    printf("element in twod array address - %d, %d \n", tdarray[0], tdarray[1]); //6422252, 6422256, 6422260, 6422264
    printf("values inside td array - %d, %d\n", *(tdarray[0]), tdarray[0][0]);
    printf("unpack values using arthematic pointers - %d, %d\n", *(tdarray[0]+1), tdarray[0][1]);
    printf("address of tdarray - %d, %d\n", tdarray, tdarray+1);
    printf("deference 1st block of array - %d\n", *(tdarray+1));
    printf("first element value in 1st row - %d\n", *(*(tdarray+1)));

// tdaaray+1 -> Row1
// *(tdaaray+1) - > [55,66,77]
//*(*(tdaaray+1)) -> 55

    //3d array
    int tdarrays[2][2][3] = {{{22,33,44},{55,66,77}},{{22,33,44},{55,66,88}}};
    int (*ptdar)[2][3] = tdarrays;
    printf("address of tdarrays %p\n", tdarrays);
    printf("77th value - %d\n", tdarrays[0][1][2]);
    printf("87th value - %d\n", tdarrays[1][1][2]);

}