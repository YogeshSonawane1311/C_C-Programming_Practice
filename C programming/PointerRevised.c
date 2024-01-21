#include<stdio.h>
int main(){
    int i =19;
    int *ptr = &i;
    int _i = *ptr;

    printf("for i is %d\n",i);//*value of address
    printf("for & is %d\n",&i);//& address of value
    printf("for ptr is %d\n",ptr);//
    printf("for &ptr is %d\n",&ptr);//
    printf("for *ptr is %d\n",*ptr);//
    printf("for *(&ptr) is %d\n",*(&ptr));//
    printf("for _i is %d\n\n",_i);
    
   
    printf("for i is %d\n",i);//*value of address
    printf("for & is %p\n",&i);//& address of value
    printf("for ptr is %p\n",ptr);//
    printf("for &ptr is %p\n",&ptr);//
    printf("for *ptr is %d\n",*ptr);//
    printf("for *(&ptr) is %d\n",*(&ptr));//
    printf("for _i is %d\n\n",_i);

}