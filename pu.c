#include <stdio.h>
long long fak(long long b){
    
    if (b == 1){
        return 1;
    }
    return b * fak(b-1);
}
long long mik(long long b){
    if(b == 1){
        return 1;
    }
    return b + mik(b-1);
}
long long f(long long n){
    if(n == 1|| n == 0){
        return 1;
    }
    return f(n - 1) + f(n - 2);
}
void um(long long b){
    for(int i = 0; i <= 10; i++){
        printf("%d * %lld = %lld \n" ,i, b, i * b);
    }     
    long long v = fak(b);
    printf("fak: %lld \n", v);
    long long h = mik(b);
    printf("sum: %lld \n", h);
    long long u = f(b);
    printf("fibanacho: %lld\n", u);
}
int main(){
    long long b;
    scanf("%lld", &b);
    um(b);
}