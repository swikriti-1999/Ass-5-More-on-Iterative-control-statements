#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter value for n for cubes of n even natural numbers : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf(" %d",i*i*i);
    }
return 0;
}