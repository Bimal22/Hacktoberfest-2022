#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    m=n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;
}
