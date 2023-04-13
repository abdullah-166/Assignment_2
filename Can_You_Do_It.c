#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    int i;
    if(number <= 0)
    {
        for(i=number; i<=1;i++)
        {
            printf("%d ",i);
        }
    }
    else
    {
         for(i=1; i<=number;i++)
        {
            printf("%d ",i);
        }
    }
    return 0;
}