#include<stdio.h>
int main(){
    char a;
    printf("Enter Character :");
    scanf("%c",&a);
    if(a>='a'&&a<='z'){
        printf("This is not alphabet");
    }
    else if(a>='A'&&a<='z')
    {
        printf("This is alphat");
    }
    else{
        printf("please enter valid character");
    }
}