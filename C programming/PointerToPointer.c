#include<stdio.h>
int main(){
    int i =10;
    int *ptr = &i;
    //int *pptr = &ptr; //Not Working
    int **pptr = &ptr;  //working
    printf("%d",**pptr);
} 