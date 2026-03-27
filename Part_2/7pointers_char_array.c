#include<stdio.h>
#include<string.h>


int main(){

  char name[6] = {'s','u','r','y','a','\0'}; 
  printf("%s\n", name); 

  int length = strlen(name); 
  printf("lenght of name - %d\n", length); 
  printf("size of name - %d\n", sizeof(name));

char arrayname[] = "hello world !!!";
printf("%s\n", arrayname); 

char *pc = arrayname;
printf("%p\n", arrayname);

printf("accessing elements - %c\n", pc[2]); // pc[2] ==> *(pc +2)

}

   