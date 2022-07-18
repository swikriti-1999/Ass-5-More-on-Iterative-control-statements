#include<stdio.h>
int main()
{
    int n,i,p=0;
    printf("Enter value for n for printing table");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        p=n*i;
        printf("%d * %d = %d",n,i,p);
        printf("\n");
    }
return 0;
}