

#include<stdio.h>

long long factorial(int n){

    long long result = 1;
    for (int i = 2; i <= n; i++){
        result *= i;
    }
    return result;
}

int main(){
    int m, n;
    while (scanf("%d %d", &m, &n) != EOF){
        long long sum = factorial(m) + factorial(n);
        printf("%lld\n", sum);
    }
    return 0;
}
