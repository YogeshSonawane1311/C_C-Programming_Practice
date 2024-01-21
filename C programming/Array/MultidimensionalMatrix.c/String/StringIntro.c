#include<stdio.h>
void printHello(char name[]){
    for(int i=0;name[i] !='\0';i++){
        printf("%c",name[i]);
    }
    printf("\n");
}
void Reverse(char *name[]){
    int n=sizeof(*name);
    for(int i=0;i<n/2;i++){
        char f1=*name[i];
        char f2=*name[n-i-1];
        *name[i]=f2;
        *name[n-i-1]=f1;
        printf("%c",*name[i]);
    }
    for(int i=0;i!='\0' ;i++){
        printf("%c",name[i]);
    }
}
int main(){
    char firstName[]="Yogesh";
    char LastName[]="Sonawane";

    printHello(firstName);
    printHello(LastName);
    Reverse(firstName);

}