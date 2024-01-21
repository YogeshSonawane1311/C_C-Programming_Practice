#include<stdio.h>
int main(){
    int n =1331;
    int result=0;
    int rem;
    int q =n;
    while(q!=0){
        rem = q%10;
        result = result*10+rem;
        q=q/10;
    }
    if(result==n){
        printf("it's pallindrome");
    }
    else{
        printf("it not pallindrome |");
    }
}