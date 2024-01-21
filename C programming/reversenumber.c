#include<stdio.h>
int main(){
    printf("Enter number :");
    int a;
    scanf("%d",&a);
    // while(a>0){
    //     printf("%d\n",a);
    //     a--;
    // }
    for(int i =0;i<a;i--){
        printf("%d\n",&a);
    }
}