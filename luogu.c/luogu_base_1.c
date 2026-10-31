#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        long long a, b, n, c = 0;
        scanf("%lld %lld %lld", &a, &b, &n);
        while(a <= n && b <= n){
            if(a < b){
                a += b;      // 谁小就把对方加上去,因为每次只可以执行一次操作，所以加最大的上数是最少的次数
            }else{
                b += a;
            }
            c++;
        }
        printf("%lld\n", c);
    }
    return 0;
}
