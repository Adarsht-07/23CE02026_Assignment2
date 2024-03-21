#include <stdio.h>

int main(){
    int r,h,V,A;
    printf("Enter the radius of cylinder :");
    scanf("%d",&r);
    printf("Enter the height of cylinder :");
    scanf("%d",&h);
    V=3.14*r*r*h;
    A=3.14*2*r*r+h*2*3.14*r;
    printf("Volume of cylinder : %d",V);
    printf("\nArea of cylinder : %d",A);

    return 0;

}