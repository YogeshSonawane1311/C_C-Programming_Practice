#include <stdio.h>
int sum(int i)
{
    if (i == 0)
    {
        return 0;
    }
    int su = 0;
    int new = i;
    int j = 0;
    while (new != 0)
    {
        j = new % 10;
        su = su + j;
        
        new = new / 10;
    }

    return su;
}
int main()
{
    int i = 4215;
    int j = sum(i);
    printf("%d", j);
}