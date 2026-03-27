#include <stdio.h>

//scanset - %[^\n]

int main()
{
    FILE *fp;

    char fname[25];
    char lastname[25];

    fp = fopen("output.txt", "r");

    fscanf(fp, "%s %[^\n] ", fname, lastname);
    printf("first_name: %s last_name: %s \n", fname, lastname);

    fscanf(fp, "%s %[^\n] ", fname, lastname);
    printf("first_name: %s last_name: %s \n", fname, lastname);

    fclose(fp);

    return 0;
}