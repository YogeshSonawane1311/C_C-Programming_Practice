#include<stdio.h>
#include<conio.h>
int conversion(int n);
int main(){
    int n;
    printf("Enter n celecius");
    scanf("%d",&n);
    float a = conversion(n);
    printf("The %d celecius equal to %f fagament",n,a);
    
}
int conversion(int n){
    float a = (n*(9/8))+32;
    return a;
}