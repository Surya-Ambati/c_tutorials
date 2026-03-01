#include<stdio.h>

int x = 10;

int main(){

printf("Hello World!!!\n");
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