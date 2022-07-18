#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter value for n for n odd natural numbers : ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        printf(" %d",i);
    }
return 0;
}