#include<stdio.h>
int main(){
    //pointer printing
    int i = 10;
    int *j=&i;
    printf("i = %d\n",i);
    printf("&i = %d\n",&i);
    printf("&j = %d\n",&j);
    printf("*j = %d\n",*j);
    printf("*(&j) = %d",*(&j));
}