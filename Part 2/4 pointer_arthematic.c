#include <stdio.h>

//pointer arthimatic - allows only + , - (addition and subtration)

int main(){

    int num_variable = 303;

    int *pi = &num_variable;

    printf("address of pi = %d, value of pi = %d\n", pi, *pi);
    printf("address of pi+1 = %d, value of pi+1 = %d\n", pi+1, *(pi+1));
    printf("address of pi-1 = %d, value of pi-1 = %d\n", pi-1, *(pi-1));

    char *cp = (char *)pi; //type casting
    printf("address of cp = %d, value of cp = %d\n", cp, *cp);
    printf("address of cp+1 = %d, value of cp+1 = %d\n", cp+1, *(cp+1));
    printf("address of cp-1 = %d, value of cp-1 = %d\n", cp-1, *(cp-1));

    void *vp = pi;
    printf("void pointer value using typecasting - %d\n", *(int *)vp);
    vp = cp;

    //generic function, memory function(malloc)

}

//-4 -3 -2 -1 0 1 2 3 4 5 6 7 8 9 10
//-5 +4 = -1 , -4-4 =-8