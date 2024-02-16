#include <stdio.h>

int main(){
    int a,b,c,d,e,f;
    printf("Enter the x-coordinate of centre of circle :");
    scanf("%d",&a);
    printf("Enter the y-coordinate of centre of circle :");
    scanf("%d",&b);
    printf("Enter the radius :");
    scanf("%d",&c);
    printf("Enter the x-coordinate of a point :");
    scanf("%d",&d);
    printf("Enter the y-coordinate of a point :");
    scanf("%d",&e);

    if ((d-a)*(d-a)+(e-b)*(e-b)==c*c)   
    {
        printf("Given points lie on the circle");
    }
    
    else if ((d-a)*(d-a)+(e-b)*(e-b)<c*c)   
    {
        printf("Given points lie inside the circle");
    }
   
    else if ((d-a)*(d-a)+(e-b)*(e-b)>c*c)   
    {
        printf("Given points lie outside the circle");
    }
   
    else {
        printf("Enter valid coordinates");
    }
    return 0;
}