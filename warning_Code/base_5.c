#include <stdio.h>

int main(){
    char gender_1 = 'F';
    char gender_2 = 'M';
    printf("您的性别是%c\n",gender_1);
    printf("您的性别是%c\n",gender_2);
    printf("%zu\n",sizeof(gender_1));
    int int_1 = 80;
    printf("打印数字1的值是:%d\n",int_1);
    char char_1 = 'A';
    printf("打印出字符1的值:%c,打印出字符串1的ASCII的值%d\n",char_1,char_1); 
    char char_2 = int_1;
    printf("打印出char_2的值:%c\n",char_2);
    printf("%zu\n",sizeof(char));
    
    return 0;
}