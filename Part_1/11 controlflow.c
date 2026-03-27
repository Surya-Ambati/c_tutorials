#include<stdio.h>

int main(){

    // int age = 51;
    // char citizen = 'i';

    // if(age>=18 & age<50){
    //     printf("You are an adult!!\n");
    //     if(citizen == 'i'){
    //         printf("And Eligible for vote!!\n");
    //     }
    // }else if (age>=50)
    // {
    //     printf("You are an Senior Citizen!!\n");
    //     if(citizen == 'i'){
    //         printf("And Eligible for vote!!\n");
    //     }
    // }
    
    // else {printf("You are a minor!!\n");}


    //switch statement

    // int day =99;
    // switch(day){
    //     case 0:
    //         printf("Monday\n");
    //         break;
    //     case 1:
    //         printf("Tuesday\n");
    //         break;
    //     case 2:
    //         printf("Wednesday\n");
    //         break;
    //     default:
    //         printf("Entered Invalid number\n");
    // }

    //goto
    int i = 1;

just_print:
    printf("print i on console - %d\n", i);

    if(i <= 10){
        goto add_one;
    }
   

add_one:
    i++;
    printf("add one result - %d\n", i);

    
    if(i > 10){
        goto add_one;
    }
       


    return 0;

}







/*
Control flow changes normal execution order by:
1 Decision making - if, if else, nested if, switch, goto (rarely used)
2 looping - for , while, do while
3 branching - jumpping or skipping code - continue, break, return. 
*/