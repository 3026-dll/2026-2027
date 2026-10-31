#include <stdio.h>
int main(){

    char category;
    float price;
    printf("A--是电子产品，B--服装，请先输入对应的类型，然后输入对应物品的价格");
    scanf(" %c %f",&category,&price);
    switch(category){
        case 'A' :
            if(price<500)
                printf("电子产品价格较低,无优惠\n");
             else if(price <= 1000)
                printf("电子产品可以享受5%%的优惠\n");
             else
                printf("电子产品可以享受10%%的优惠\n");
            break;
        case 'B' :
            if(price<200)
                printf("服装价格较低，无优惠\n");
            else if(price <= 500)
                printf("服装可以享受8%%的优惠\n");
            else
                printf("服装可以享受15%%的优惠\n");
            break;
        default:
            printf("输入的数据类型无效,请输入1或者2\n");
            break;
        
    }
    return 0;
}
//需要打印出百分号的话需要%%才可打印出来