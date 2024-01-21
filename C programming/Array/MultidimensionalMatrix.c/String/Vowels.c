#include<stdio.h>
#include<string.h>
void vowel(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
            count++;
        }
    }
    printf("%d",count);
}
int main(){
    char arr[]="Hello World";
    vowel(arr);
}