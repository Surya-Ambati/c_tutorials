#include <stdio.h>

//1d arrays - 10 20 30 40
//2d arrays - 1 2   
//            3 4  

//vla - variabale length array

// int main() {

//     // int oned_array[10]={};
//     // printf("one array value - %d\n",oned_array[5]);

//     // int tdarray[2][2];

//     // tdarray[0][0] =1;
//     // tdarray[0][1] =2;
//     // tdarray[1][0] =3;
//     // tdarray[1][1] =4;
    

//     int tdarray[2][2] = {{1,2},{3,4}};

//     for(int i=0;i<=1;i++){
//         for(int j=0;j<=1;j++){
//             printf("matrix values - %d\n",tdarray[i][j]);
//         }
//     }
// }

int main(){

    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int vla_array[n];

    for(int i=0;i<=n;i++){
        vla_array[i] = i*10;
    }

    for(int i=0;i<=n;i++){
        printf("vla array values are - %d\n", vla_array[i]);
    }

}