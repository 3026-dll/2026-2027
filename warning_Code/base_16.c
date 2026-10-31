#include <stdio.h>
int main(){
    for(int i = 1;i<=50;i=i+1){
        if(i%2==0&&i%3!=0&&i!=42){
    printf("%d\n", i );
        }
    }
    return 0;
}