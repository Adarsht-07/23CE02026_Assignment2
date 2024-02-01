#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the first Number:");
    scanf("%d",&a);
    printf("\nEnter the second Number:");
    scanf("%d",&b);
    printf("\nEnter the third Number:");
    scanf("%d",&c);
    if (a>b && a>c)
    {
       printf("%d is the largest integer",a);
    }
    else if (b>c && b>a)
    {
       printf("%d is the largest integer",b);
    }
    else if (c>a && c>b)
    {
       printf("%d is the largest integer",c);
    }
    else{
        printf("Numbers are equal");
    }
}
