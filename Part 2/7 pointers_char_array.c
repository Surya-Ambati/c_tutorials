#include<stdio.h>

int incre(int x){
    printf("address of x - %p\n", x);
    x +=10;
    printf("increased of value - %d\n", x);
}

int sumofelements(int arr[]){
     printf("address of fumc arr - %p\n", arr);
     int no_ele = sizeof(arr)/sizeof(arr[0]);
     printf("no of func elements %d\n", no_ele);

     for(int i =0; i<5; i++){
        printf("%d\n",arr[i]);
     }
}

int main(){



    int inarr[]= {11,22,33,44,54};

     printf("address of inarr - %p\n", inarr);
     int ma_ele = sizeof(inarr)/sizeof(inarr[0]);
     printf("no of main elements %d\n", ma_ele);

     sumofelements(inarr);





    char name[] = "Surya";
    printf("%s\n", name);
    


    char name[20];
    fgets(name, sizeof(name), stdin);
    printf("%s", name);
    return 0;




}

    // int a = 10;
    // printf("address of a - %p\n", &a);
    // incre(a);
    // printf("value of a after increment - %d\n", a);