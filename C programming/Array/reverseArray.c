#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 6, 7, 9};
    int a=sizeof(arr);
    printf("%d\n",a/4);
    // for (int i = 7; i > 0; i--)
    // {

    //     printf("%d\t", arr[i]);
    // }
    for (int i = 0; i < 7 / 2; i++)
    {
        int firstValue = arr[i];
        int secondValue = arr[7 - i - 1];
        arr[i] = secondValue;
        arr[7 - i - 1] = firstValue;
    }
    for(int i =0;i<7;i++){
        printf("%d\t",arr[i]);
    }
}