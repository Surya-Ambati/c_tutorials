#include<stdio.h>


char name[] = "ram"; //string inside c programming - s
int x_var = 10; //format - i

char single_char = 's'; //char - c

int main(){

printf("Hello World!!!\n");
printf("surya\n");
printf("%s\n",name);
printf("10");
printf("-----------Programme End-----------------\n");
return 0;

}

// single line comment

/*
Multiline comment:
Behind the scences majorly perform 4 steps:

1) preprocessing -> gcc -E helloworld.c
2) compilation -> gcc -S helloworld.c - file.c (Assembly code)
3) Assembling -> gcc -c file.c (machine code)
4) Linking -> output - .o


//memory/ RAM:
1) text section 2) data section 3) heap 4) stack 

*/