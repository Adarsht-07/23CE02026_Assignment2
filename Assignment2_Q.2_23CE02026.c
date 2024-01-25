#include <stdio.h>

int main(){
    int a,b,c,max;
    printf("Enter the first numbers:");
    scanf("%d",&a);
    printf("Enter the second numbers:");
    scanf("%d",&b);
    printf("Enter the third numbers:");
    scanf("%d",&c);
    max=a>b?a:b;
    max=max>c?max:c;
    printf("Max number is:%d",max);
}