/* 
Read two numbers M and N indefinitely. Calculate and write the sum of their factorial. Be carefull, because the result can have more than 15 digits.
Input

The input file contains many test cases. Each test case contains two integer numbers M (0 ≤ M ≤ 20) and N (0 ≤ N ≤ 20). The end of file is determined by eof.
Output

For each test case in the input your program must print a single line, containing a number that is the sum of the both factorial (M and N). */

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
