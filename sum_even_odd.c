#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    int A[number];
    int es=0;
    int os=0;
    int i;
    for(i=0;i<number;i++)
    {
        scanf("%d ",&A[i]);
    }
    for(i=0;i<number;i++)
    {
       if((A[i])%2 == 0)
       {
           es+=A[i];
       }
       else
       {
        os += A[i];
       }
    }
    printf("%d ",es);
      printf("%d ",os);
    return 0;
}