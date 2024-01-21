#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Hello.txt", "r");
    char arr;
    fscanf(fptr, "%c", arr);
    printf("charatcer =%c\n", arr);
    fclose(fptr);
}