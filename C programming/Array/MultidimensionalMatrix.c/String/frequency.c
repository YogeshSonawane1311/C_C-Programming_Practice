#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char arr[1001]= "aas23vnkcv12k4";
    
    //arr = (char*)malloc(1000*sizeof(char));
    int count = 0;
    int i, j;
    for (i = 48; i < 58; i++)
    {
        count = 0;
        for (j = 0; j<strlen(arr); j++)
        {
            if (arr[j] == i)
            {
                count++;
            }
        }
        printf("%d ", count);
    }
    return 0;

}