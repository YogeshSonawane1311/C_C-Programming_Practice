#include<stdio.h>
int main(){
    int n=4;
    int b;
    //scanf("%d",&n);
    for(int i =0;i<n;i++){
        for(int j =0;j=n*2-1;j++){
            if(j>=(n-1)|| j<=(n+1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    }
}