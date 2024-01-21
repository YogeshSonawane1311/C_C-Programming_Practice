#include<stdio.h>
void doWork(int num1,int num2,int *sum,int *avg,int *prod){
    *sum = num1+ num2;
    *avg=  (num1+ num2)/2;
    *prod= num1*num2;

}
int main(){
    int num1 =45;
    int num2 =85;
    int sum,avg,prod;
    doWork(num1,num2,&sum,&avg,&prod);
    printf("%d and %d is prod is %d,avg is %d, sum is %d ",num1,num2,prod,avg,sum);
}