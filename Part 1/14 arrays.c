#include<stdio.h>

int score1 = 20;
int score2 = 30;
int score3 = 40;

int main(){
int score_arry[5] = {10,20,30,40,50}; //index - 0,1,2,3,4

int test_score[4];

test_score[0]= 14;
test_score[1]= 19;
test_score[2]= 75;
test_score[3] = 73;

printf("array 4th element - %d\n",score_arry[4]);

for(int i=0;i<=3;i++){
    printf("test score values are %d\n",test_score[i]);
}

return 0;
}