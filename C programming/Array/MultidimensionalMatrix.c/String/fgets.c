#include<stdio.h>
#include<string.h>
int main(){
    int count=0;
    char cha[100]="Hello World";
    //int len=strlen(cha);
    //printf("%d",len);
    for(int i=0;cha[i]!='\0';i++){
        count++;
    }
    for(int i=0;i<count/2&&cha[i]!='\0';i++){
        char p1= cha[i];
        char p2= cha[count-i-1];
        cha[i]=p2;
        cha[count-i-1]=p1;
        
    }
    for(int i=0;cha[i]!='\0';i++){
        printf("%c",cha[i]);
    }
    //puts(cha);
    printf("\n%d",count);
}