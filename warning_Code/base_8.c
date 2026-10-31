#include <stdio.h>
#include <math.h>
int main(){
    const float PI = 3.1415;
    float cirle_1 = PI*pow(2,2);
    float cirle_2 = PI*pow(8,2);
    printf("半径为2的圆的面积:%.2f\n,半径为8的圆的面积:%.2f\n",cirle_1,cirle_2);
    return 0;
}