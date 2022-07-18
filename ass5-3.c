#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter value for n for n number of print in reverse order : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf(" %d",i);
    }
return 0;
}