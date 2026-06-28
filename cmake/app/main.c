#include <stdio.h>
#include "math_lib.h"
#include "config.h"


int main(){
    printf("Programme started!!\n");
    int a = 6;
    int b = 7;
    int result = add_numbers(a, b);

    printf("Total of a and b: %d\n", result);
    printf("Project Name: %s\n", PROJECT_NAME);
    printf("Project Version: %s\n", PROJECT_VERSION);
    printf("Project Version (Major): %d\n", PROJECT_VERSION_MAJOR);
    printf("Project Version (Minor): %d\n", PROJECT_VERSION_MINOR);
    printf("Project Version (Patch): %d\n", PROJECT_VERSION_PATCH);

    return 0;
}