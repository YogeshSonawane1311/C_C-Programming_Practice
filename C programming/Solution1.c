#include<stdio.h>
int main(){
    int a = 5;
    int sum=0;
    while(a<=50){
        sum+=a;
        a++;
    }
    printf("%d",sum);
}