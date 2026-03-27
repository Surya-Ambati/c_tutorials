#include<stdio.h>

int main(){

    FILE *tfile = tmpfile();
    char temparray[100];

    if(tfile == NULL){
        perror("Temp file error");
    }

    fprintf(tfile, "Hello everyone welcome to c programmig!!");

    rewind(tfile);
    fgets(temparray, sizeof(temparray), tfile);

    printf("temp data - %s\n", temparray);

    fclose(tfile);

    return 0;

}