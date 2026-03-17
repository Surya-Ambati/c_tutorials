#include <stdio.h>

//fprinft(fp/stdout, "format string", values)

int main()
{
    // FILE *fp = fopen("readme.txt", "w");
    // if(fp ==NULL){
    //     perror("file open error!!\n");
    // }
    // else{
    //     int result = fprintf(fp, "Welcome c language!!!" );
    //     printf("count : %d\n", result);
    // }

    // // int age = 40;
    // // char channel[] = "youtube channel";

    // // if(fp ==NULL){
    // //     perror("file open error!!\n");
    // // }
    // // else{
    // //     fprintf(stdout, "age: %d, channel : %s", age, channel );
    // // }

    // fclose(fp);

    FILE *fp;
    char word[20];

    fp = fopen("readme.txt", "r");

    fgets(word, sizeof(word), fp);
    printf("First read: %s\n", word);

    rewind(fp);

    fgets(word, sizeof(word), fp);
    printf("After rewind fn: %s\n", word);

    fclose(fp);
    return 0;


}