#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*fp)(int, int) = add;

    int result = fp(5, 3);
    printf("Result = %d\n", result);

    return 0;
}

// int add(int a, int b) { return a + b; }
// int sub(int a, int b) { return a - b; }

// int main() {
//     int choice = 1;

//     int (*fp)(int,int);

//     if(choice == 1)
//         fp = add;
//     else
//         fp = sub;

//     printf("%d\n", fp(10,5));
// }