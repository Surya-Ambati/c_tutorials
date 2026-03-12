#include<stdio.h>

//scanf("format_specifier", &variable_name); ex: scanf("%d", &age);
// 

int main(){

    int age, age2, age3;
    char grade1;
    char grade[3];
    printf("Enter your age: ");
    scanf("%d", &age);
    scanf("%d", &age2);
    scanf("%d", &age3);
    printf("you are %d years old \n", age);
    printf("you are %d years old \n", age2);
    printf("you are %d years old \n", age3);

    getchar();

    printf("Enter your grade: ");
    scanf("%c", &grade1); //using char and %c will get only first letter ex: char grade1 , input - c+ , output  - c only. 
    printf("your grade %c \n", grade1);

    getchar();

    printf("Enter your second grade: ");
    scanf("%s", &grade); //using array and  %s will get complete grade ex: char grade[3] , input - c+ , output  - c+
    printf("your grade %s \n", grade);

}