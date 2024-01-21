#include <stdio.h>
#include <string.h>
void Check(char arr[], char n)
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == n)
        {
            count++;
        }
    }
    printf("%c is present %d times in %s",n,count,arr);

}
int main()
{
    char arr[] = "Hello World";
    Check(arr,'l');
}