#include<stdio.h>
int printHello(int n){
    if(n==0){
        return 0;
    }
    printf("hello WOrld\n");
    return printHello(n-1);
}
int main(){
    int i=5;
    printHello(i);
}