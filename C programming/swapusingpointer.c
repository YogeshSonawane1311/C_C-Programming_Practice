#include<stdio.h>
int main(){
    int a = 9;
    int b =10;

    printf("a =%d b=%d\n",a,b);
    
    int *c=&a;
    int *d=&b;
    printf("%d\n",c);
    printf("%d\n",a);
    a=*d;
    b=*c;
    printf("a =%d b=%d",a,b);
}