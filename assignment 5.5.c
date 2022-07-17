#include <stdio.h>

int main()
{
    int i,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=n;i>=0;i--)
    {
        printf("%d",(2*i)+1);
        printf("\n");
    }

    return 0;
}