#include <stdio.h>
#include <math.h>

int main(){
    int result_1 = 2+10/8*3;
    printf("result:%d\n",result_1);
    double result_2 = 2+10/8.0*3;
     printf("result:%lf\n",result_2);
     float a = 5;
     float b = 22;
     float c = 3;
     float x_1 = (-b+sqrt(pow(b,2)-4*a*c))/2*a;
     float x_2 = (-b+sqrt(pow(b,2)-4*a*c))/2*a;//这个是sqrt开平方，而这个pow是次方
     printf("x_1=:%f\n,x_2=%f\n",x_1,x_2);
     return 0;
}