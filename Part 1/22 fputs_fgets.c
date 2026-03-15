#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("output.txt", "w");

    fputs("Hello World\n", fp);
    fputs("Welcome to C programming\n", fp);

    fclose(fp);
}