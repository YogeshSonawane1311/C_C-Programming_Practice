#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Hello.txt","a");
    if(fptr==NULL){
        printf("file does not exists");
    }
    fprintf(fptr,"%c",'M');
    
    // char ch;
    // fscanf(fptr,"%c",ch);
    // printf("first letter = %c\n",ch);
    fclose(fptr);
    return 0;
}