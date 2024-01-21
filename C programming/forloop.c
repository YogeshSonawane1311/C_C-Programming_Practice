// #include<stdio.h>
// int main(){
//     int n =5;
//     for(int i =1;i<=n;i++){
//         for(int j=i;j<=5;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
/*output
*****
****
***
**
*
*/

// #include<stdio.h>
// int main(){
//     for(int i=0;i<5;i++){
//         for(int j =0;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

/*output
*
**
***
****
*****
*/

#include<stdio.h>
int main(){
    for(int i=0;i<=5;i++){
        for(int j =0;j<=i;j++){
            printf(" ");
        }
        for(int k =i*2;k<5;k++){
            printf("A");
        }
        // for(int l=i;l<5;l++){
        //     printf("A");
        // }
        printf("\n");
    }
}