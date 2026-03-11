#include<stdio.h>

   int global_var = 0; //global variable

void counter(){
    global_var++;
    printf("global variable value - %d\n", global_var);
}

void local_counter(){
    int local_var = 0;
    local_var++;
    printf("local variable value - %d\n", local_var);
}

void static_counter(){
    static int stat_var =0;
    stat_var++;
    printf("static variable value - %d\n", stat_var);
}

int main(){

    counter(); //glocal_var = 1
    counter(); //global_var = 2
    counter(); //global_var = 3
    local_counter();
    local_counter();
    local_counter();
    static_counter(); //1
    static_counter(); //2
    static_counter(); //3
    printf("global variable value - %d\n", global_var);
    // printf("local variable value - %d\n", local_var);
}







//Notes: storage class and scope of variables:

// data types tells what data is stored
// storage classes explain where and how long it stored
// global and local varaibles explain scope of varibles ex: entire program, inside function
