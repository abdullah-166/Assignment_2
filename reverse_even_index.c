#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(i %2 == 0)
       {
        printf("%d ",A[i]);
       }
    }
    return 0;
}