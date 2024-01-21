#include<stdio.h>
int main(){
    int n=3;
    //printf("Enter number of Product =");
    //scanf("%d",&n);
    float arr[3]={100,45,23};
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%f",&arr[i]);
    // }
    printf(" final cost is ");
    for(int i=0;i<n;i++){
        float gst = arr[i]*18/100;
        printf("final cost of product is %f with GST is %f\n",arr[i],(arr[i]+gst));
    }
}