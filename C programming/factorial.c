#include<stdio.h>
int main(){
    printf("Enter Your number");
    int a ;
    scanf("%d",&a);
    int fac=1;
    while(a>=1)
    {
        fac=a*fac;
        a--;
    }
    printf("%d",fac);
}
