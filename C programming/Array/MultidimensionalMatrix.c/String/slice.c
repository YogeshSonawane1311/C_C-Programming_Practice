#include<stdio.h>
#include<string.h>
void slice(char arr[],int m,int n){
    char newstr[100];
    int j=0;
    for(int i=m;i<=n;i++,j++){
        newstr[j]=arr[i];
    }
    newstr[j]='\0';
    puts(newstr);
}
int main(){
    char arr[100]="HelloWorld";
    slice(arr,3,6);

}