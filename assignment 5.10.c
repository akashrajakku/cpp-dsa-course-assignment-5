#include <stdio.h>

int main()
{
    int i,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d",(n*i));
        printf("\n");
    }

    return 0;
}