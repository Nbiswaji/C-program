#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter no.\n");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("%d", &i);
        printf("\n");
    }
    return 0;
}