#include<stdio.h>

//fputs and fgets - string 
//fputc and fgetc - char

int main(){
    //fputc(character, fpointer) . fgetc(fpointer)

    FILE *fp = fopen("testfile.txt", "r");
    char name[] = "Sri Surya"; //\0
    int i =0;
    
    if(fp == NULL){
        // printf("File not available!!");
        perror("File Error");
    }
    else{
        // fputc('S', fp);
        // fputc('U', fp);
        // fputc('R', fp);
        // fputc('Y', fp);
        // fputc('A', fp);

        // while(name[i] != '\0' ){
        //     fputc(name[i], fp);
        //     i++;
        // }

        // printf("successfully written!!!\n");
        // printf("char from file -  %c\n" , fgetc(fp));
        char ch;
        while((ch = fgetc(fp)) != EOF){
            printf("char from file - %c\n", ch);
        }
    }

    fclose(fp);

    return 0;

}