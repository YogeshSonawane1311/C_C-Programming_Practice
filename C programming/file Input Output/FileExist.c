#include<stdio.h>
int main(){
    FILE *ptr;
    FILE *ptr1;
    ptr1 = fopen("FileNot Exist","r"); //NULL poinbter creating
    ptr = fopen("HelloWorld","w");//creating new file 
    if(ptr==NULL){
        printf("file does not exists");
    }
    else{
        fclose(ptr);
    }
}