#include <stdio.h>

int main(){
    char category;
    float price;
    printf("A--是电子产品，B--服装，请先输入对应的类型，然后输入对应物品的价格\n");
    scanf(" %c %f",&category,&price);

    switch(category){
        case 'A' : // 匹配字符A，对应电子产品
            if(price<500)
                printf("电子产品价格较低,无优惠\n");
            else if(price <= 1000)
                printf("电子产品可以享受5%%的优惠\n");
            else
                printf("电子产品可以享受10%%的优惠\n");
            break;
        case 'B' : // 匹配字符B，对应服装
            if(price<200)
                printf("服装价格较低，无优惠\n");
            else if(price <= 500)
                printf("服装可以享受8%%的优惠\n");
            else
                printf("服装可以享受15%%的优惠\n");
            break;
        default:
            printf("输入的数据类型无效，请输入A或者B\n");
            break;
    }
    // 把结束提示和返回值移到switch外面
    printf("程序运行成功啦！\n");
    return 0;
}