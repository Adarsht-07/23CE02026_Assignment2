#include <stdio.h>

int main(){
    int a,i=1,s1,s2;
    printf("Enter the number :");
    scanf("%d",&a);
    while(i<a){
        s1=i;
        s2=a-i;
        i=i+1;
        int j=2;
         while(j<a){
        
             while (s1%j==0 && s2%j==0 )
             {
                 printf("%d %d",s1,s2);
             }
             if (s1%j!=0 && s2%j!=0)
            {
            j=j+1;
            }
        }
       }
       return 0;
}
