#include<stdio.h>
int fib(int n);
int main(){
    int n =6;
    //printf("Enter number = ");
    //scanf("%d",&n);
    printf("Enter nummber is %d",fib(n));
    
}
int fib(int n){
    
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
    
    int num1=fib(n-1);
    int num2=fib(n-2);
    int nth = num1 + num2;
    printf("fib of %d is %d\n",n,nth);
    return nth;
}