#include <stdio.h>
#include <stdlib.h>
// void fibo_w_Trecur(int n, int a, int b){
//     //0 1 1 2 3 5 8
//     //a b -print(a)
//     //  a b -print(a)
//     if(n==0) return;
//     printf("%3d ",a);
//     fibo_w_Trecur(n-1, b, a+b);
// }
int fact(int n, int x){
    if(n==0) return 1;
    return fact(n-1,n*x);
}
int main(){
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    // printf("Fibonacci series for %d terms:\n",n);
    // fibo_w_Trecur(n,0,1);
    printf("Factorial of %d = %d",n,fact(n,1));
    return 0;
}