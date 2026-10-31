#include <stdio.h>
int main(){
int year_1 = 2088;
if(year_1%4==0&&year_1%100!=0||year_1%400==0){
printf("%d是闰年\n",year_1);
}
else{
    printf("%d不是闰年\n",year_1);
}

}