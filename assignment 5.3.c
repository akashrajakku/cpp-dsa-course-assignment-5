#include <stdio.h>

int main()
{
    int i,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("%d",i);
        printf("\n");
    }

    return 0;
}