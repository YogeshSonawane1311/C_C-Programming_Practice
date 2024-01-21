#include<stdio.h>
int main(){
    int n =371;
    int count=0;
    int q = n;
    int result;
    //for counting how many number of number
    while(q!=0){
        q=q/10;
        count++;
    }
    printf("Count of number is %d",count);
    int mul=0;
    int c = count;
    int mul=0;
    while(q!=0){

        int rem=q%10;
        while(c!=0){

            mul = mul*rem;
            c--;

        }
        result=result+mul;
        c = count;
        q=q/10;
        mul=1;
    }
    printf("%d",result);

}