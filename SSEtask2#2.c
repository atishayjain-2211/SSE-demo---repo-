#include <stdio.h>
int main(){
    int n ;
    printf("enter number :");
    scanf("%d",&n);

    int sum = 0 ;
    


    while(n>=10){
        int sum = 0 ;
        while(n!=0){
        int digit=n%10;
        sum+=digit;


        n=n/10;
        }

        n=sum;

 

}

printf("%d",n);

return 0;


    }