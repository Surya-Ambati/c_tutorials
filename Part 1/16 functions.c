#include<stdio.h>

//value return function
int add(int x, int y){
    return x+y;
}

//action fuctions
void sadd(int x, int y){
    printf("special add %d\n",x+y);
}

int main(){

int a= 12;
int b = 20;

int result = add(a,b);
printf("add result %d\n",result);

int c = 45;
sadd(b,c);

}

