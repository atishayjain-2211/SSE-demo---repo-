#include <stdio.h>
int main (){

int r=0;
int n ;

printf("Enter number: ");
scanf("%d", &n);

while (n>0){
int digit=n%10;
r=r*10 + digit;


n=n/10;


}

while(r>0){
    int newdigit=r%10;
    switch (newdigit){
    case 0 :
    printf("zero ");
    break;
    case 1 :
    printf("one ");
    break;
    case 2 :
    printf("two ");
    break;
    case 3:
    printf("three ");
    break;
    case 4 :
    printf("four ");
    break;
    case 5 :
    printf("five ");
    break;
    case 6 :
    printf("six ");
    break;
    case 7 :
    printf("seven ");
    break;
    case 8 :
    printf("eight ");
    break;
    case 9 :
    printf("nine ");
    break;
    
}

    r=r/10;
}
return 0 ;
}
