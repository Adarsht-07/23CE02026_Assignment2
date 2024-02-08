#include <stdio.h>

int main(){
    int a,b,c,l,m,n;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    l=a>b && a>c;
    m=b>a && b>c;
    n=c>a && c>b;
    switch (l)
     {
    case 1:
        printf("%d is the largest number",a);
        break;
     }
    switch (m)
    {
    case 1:
        printf("%d is the largest number",b);
    }
    switch (n)
    {case 1:
        printf("%d is the largest number",c);
        break;
        
    case 0:
        printf("Number are equal hence %d is largest",c);
        break;
    }
}