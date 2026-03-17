#include <stdio.h>

int main()
{
    // FILE *fp = fopen("data.bin", "wb");
    FILE *fp = fopen("data.bin", "rb");
    // int x = 65;
    // int arr[3] = {66,67, 68};
    int y;
    // int arr[] = " ";


    if(fp == NULL)
    {
        perror("File open error\n");

    }

    // size_t result = fwrite(arr, sizeof(int), 3, fp);
    // printf("Items written: %zu\n", result);

    fread(&y, sizeof(int), 1, fp);
    printf("Value : %d\n", y);

    fclose(fp);
    return 0;
    
}

//fprintf - text write, fwrite - binary write