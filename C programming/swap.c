#include<stdio.h>
int swap(int i,int j){
    int temp = i;
    i=j;
    j=temp;
    printf("a =%d b=%d",i,j);
    return 0;
}
int main(){
    int i=3;
    int j=5;
    printf("a =%d b=%d\n",i,j);
    swap(i,j);
}