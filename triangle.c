#include<stdio.h>
int main()
{
    int n,i,j;
    printf("line number n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n-1);j++)
        {
            if((n-i)<j&&j<((n+i))) printf("z");
            else printf(" ");
        }
        printf("\n");
    }
}