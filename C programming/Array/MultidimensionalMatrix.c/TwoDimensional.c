#include<stdio.h>
int main(){
    int arr[2][10];
    // for(int i =0 ; i<2;i++){
    //     for(int j=0;j<10;j++){
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    int number =5;
    for(int i =0 ; i<2;i++){
        for(int j=1;j<=10;j++){
            arr[i][j]=number*j;
            printf("%d\t",arr[i][j]);    
        }
        
        printf("\n");
    }
}