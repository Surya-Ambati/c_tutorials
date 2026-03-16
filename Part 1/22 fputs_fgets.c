#include <stdio.h>

//fgets(destination, size, stream); //stream - filepointer, stdin
// - new line, \n, no data exists in file, size -1 character only.

int main()
{
    FILE *fp = fopen("output.txt", "r");
    char name[40];

    // fputs("Hello World\n", fp);
    // fputs("Welcome to C programming\n", fp);

    //general string reading: 

    // if(fp ==NULL){
    //     perror("File Error");
    // }
    // else{
    //     fgets(name, sizeof(name), fp );
    //     printf("read data - %s", name);
    // }

    //complete string reading:
    while(fgets(name, sizeof(name), fp) != NULL){
        printf("inside data - %s", name);
    }

    fclose(fp);

    return 0;
}