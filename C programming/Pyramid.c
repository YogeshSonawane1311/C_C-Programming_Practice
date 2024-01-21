#include<stdio.h>
int main(){
    int  i,j,k;
    for(i=0;i<3;i++){
        for(j=3;j>i;i--){
            printf(" ");
            for(k =1;k<i;k++){
                printf("*");
            }
            printf("\n");

        }
    }
}