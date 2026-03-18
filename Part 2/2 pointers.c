#include<stdio.h>

void test(){
    
    int abc = 5;
    int *pp= &abc;
    printf("%p", pp);
    pp = 10;
    printf("%p", pp);

}

int main(){
    test();
}
