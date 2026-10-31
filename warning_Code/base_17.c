#include <stdio.h>
int main(){
    int arr[5];
    printf("请随机输入五个整数：");
    // scanf(" %d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4]);
    for(int i = 0;i<5;i++){
        scanf(" %d",&arr[i]);
        printf("输入完毕\n");
    }
    for(int i = 0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}