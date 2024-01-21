#include<stdio.h>
int main(){
    int i =45;
    int *ptr = &i;
    printf("ptr is %u\n",ptr);
    ptr++;
    printf("ptr is %u\n", ptr);
    ptr--;
    printf("ptr is %u\n", ptr);
}