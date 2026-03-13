#include<stdio.h>

int main(){
    //char
    char name ='s';
    //string
    char fullname[8] = "surya!!"; // surya!!\0 - 8 bytes

    char word[] = {'s','u','r','y','a','!','!','\0'};

    printf("char are - %c\n",fullname[3]); //y
    printf("string - %s\n", fullname);

    printf("Enter another name: ");
    // scanf("%s\n", fullname); 
    fgets(fullname, 8, stdin); //fgets function


    printf("updated entered name is - %s", fullname);


    //strcmp - used for comparing two strings.

}