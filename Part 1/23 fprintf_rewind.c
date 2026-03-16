#include <stdio.h>

int main()
{
    FILE *fp;
    char word[20];

    fp = fopen("data.txt", "r");

    fgets(word, sizeof(word), fp);
    printf("First read: %s", word);

    rewind(fp);

    fgets(word, sizeof(word), fp);
    printf("After rewind: %s", word);

    fclose(fp);
}