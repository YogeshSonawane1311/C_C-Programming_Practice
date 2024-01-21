#include <stdio.h>// Not swapping
int swap(int *i,int *j){
    int temp=*j;
    *j=*i;
    *i=temp;
    printf("i= %d and j =%d\n",*i,*j);
    return 0;
}
int main(){
    int i = 3;
    int j = 4;
    swap(&i,&j);
    printf("Main i= %d and j =%d",i,j);//call by reference working
}

