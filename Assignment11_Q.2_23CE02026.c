#include<stdio.h>
#include<string.h>

int main()
{
    char A[100];
    int l;
    printf("\n Enter the string : ");
    scanf("%s",A);
    l=strlen(A);
    for(int j=0;j<l;j++)
    {
        for(int i=0;i<l-2;i++)
       {
          if(A[i]==A[i+1]);
          A[i]=0;
          A[i+1]=0;
        }
    }
    int k=0;
    for(int i=0;i<l;i++){
        if((A[i]>='a'&&A[i]<='z') || (A[i]>='A'&&A[i]<='Z')){
        A[k]=A[i];
        k++;
        }
    }
    A[k]='\0';
    printf(" %s",A);

    return 0;
}