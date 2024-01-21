#include<stdio.h>
int main(){
    //Array decalaration
    int arr[2][2]={{1,2},{1,2}};
    int arr2[2][2]={{1,2},{1,2}};
    for(int i=0;i<2;i++){
        for(int j =0;j<2;j++)
        {
            printf("%d\t",arr[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
}