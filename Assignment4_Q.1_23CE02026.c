#include <stdio.h>

int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    
    switch (a%2==0)
    {
    case 1:
       printf("Given number is Even");
        break;
    
    default:
        printf("Given number is odd");
        break;
    }
}