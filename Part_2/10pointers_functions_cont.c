#include <stdio.h>
#include <stdlib.h>

// int main() {
//     int *arr;
//     int n = 5;

//     // allocate memory for 5 integers
//     arr = (int*) calloc(n, sizeof(int));

//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     // values will be initialized to 0
//     printf("Values after calloc:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);  // all zeros
//     }

//     free(arr); // free memory
//     return 0;
// }

// realloc example:

int main() {
    int *arr;
    int n = 3;

    // initial allocation
    arr = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // increase size to 6
    arr = (int*) realloc(arr, 6 * sizeof(int)); // here arr inside realloc function takes existing pointer.

    printf("After realloc:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);  // first 3 preserved
    }

    free(arr);
    arr = NULL;
    return 0;
}