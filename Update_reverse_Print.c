#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    int v,x,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d %d",&x,&v);
    for(i=n-1; i>=0; i--)
    {
       A[x] = v; 
       printf("%d ",A[i]);
    }
     
    return 0;
}