#include <stdio.h>

int main()
{
    // FILE *fp = fopen("data.bin", "wb");
    FILE *fp = fopen("data.bin", "rb");
    // int x = 65;
    // int arr[3] = {66,67, 68};
    int y;
    int arr[3];


    if(fp == NULL)
    {
        perror("File open error\n");

    }

    // size_t result = fwrite(arr, sizeof(int), 3, fp);
    // printf("Items written: %zu\n", result);

    fread(arr, sizeof(int), 3, fp);
    // printf("Value : %d\n", y);
    
    for(int i=0; i<3; i++){
        printf("value in array: %d\n", arr[i]);
    }

    fclose(fp);
    return 0;

}

//fprintf - text write, fwrite - binary write