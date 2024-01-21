#include <stdio.h>
#include <string.h>
void Check(char arr[], char n)

{

    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == n)
        {
            printf("%c is present in %s", n, arr);
            return;
        }
    }
    printf("%c not present",n);
}
int main()
{
    char arr[] = "Hello World";
    Check(arr, 'a');
}