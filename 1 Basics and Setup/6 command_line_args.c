#include<stdio.h>

//argc - argument count, argv - argument vector

int main(int argc, char *argv[]){
    
    printf("no of argumnets - %d\n", argc);
    printf("first argument - %s\n", argv[0]);
    printf("second argument - %s\n", argv[1]);
    printf("third argument - %s\n", argv[2]);
    printf("fourt argument - %s\n", argv[3]);
}