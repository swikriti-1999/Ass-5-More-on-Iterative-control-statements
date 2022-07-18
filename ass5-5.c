#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter value for n for n odd natural numbers in reserve order : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        if(i%2==1)
        printf(" %d",i);
    }
return 0;
}