#include <stdio.h>
int main(){
    int user_type;
    double price;
    user_type = 2;
    price = 180;
    if(user_type == 1){
        if(price>100){
            printf("最终支付金额为：%.2lf\n",price*0.95);
        }
        else{
            printf("最终支付金额为：%.2lf\n",price);
        }
    }
    else if(user_type==2){
        if(price>200){
            printf("最终支付金额为：%.2lf\n",price*0.9);
        }
        else{
            printf("最终支付金额为：%.2lf\n",price*0.97);
        }
    }
    else{
        printf("该用户类型无效。");
    }
    return 0;
}