#include <stdio.h>

int main(){
    int n;
    char name[16];

    printf("请输入你想要打招呼的人数：");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("你想打招呼的人的名字：");
        scanf("%15s",name);
        printf("%s,你好\n", name);
    }
    printf("您已经打完了所有的招呼");
    return 0;
}