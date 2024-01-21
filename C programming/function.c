#include<stdio.h>
int printHello(){
    printf("Hello World");
}
int sum(int a,int b){
    int c = a+b;
    return c;
}
int main(){

    printHello();
    int a= sum(10,31);
    printf("\nsum is %d",a);
}