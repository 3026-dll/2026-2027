#include <stdio.h>

int main(){
    int i = 1;
    int sum_1 = 0;
    int sum_2 = 0;
        while(i<=100){
        i = i+1;
       if(i % 2 == 0){
        sum_1 = sum_1 + i;
       }
    }
    printf("i=%d",i);
    i = 1;
    do{
        i = i+1;
        if(i%2 == 0){
            sum_2 = sum_2 + i;
        }
    }while(i<=100);
   
    printf("1到100中所有的偶数的和为:%d\n",sum_1);
    printf("1到100中所有的偶数的和为:%d\n",sum_2);
    return 0;
}