#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int n,p[20],m[20][20],s[20][20];
void matrix_chain_order()
{
    int i,j,k,l,q;
    for(i=1;i<n;i++)
    m[i][i]=0;
    for(l=2;l<n;l++)
    {
        for(i=1;i<n-l+1;i++)
        {
            j=i+l-1;
             m[i][j] = INT_MAX;
             for(k=i;k<=j-1;k++)
             {
                q=m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                if (q<m[i][j])
                {
                    m[i][j] = q;
                    s[i][j] = k;
                }
             }
        }
    }
}
void print_optimal_parens(int i, int j)
{
    if (i==j)
        printf("A%d",i);
    else
    {
        printf("(");
        print_optimal_parens(i,s[i][j]);
        print_optimal_parens(s[i][j]+1,j);
        printf(")");
    }
}
int main()
{
    printf("Enter number of mtrices:\n ");
    scanf("%d",&n);
    printf("Enter dimensions: \n");
    for(int i=1;i<=n;i++)
    {
        printf("p%d: ", i);
        scanf("%d", &p[i]);
    }
    matrix_chain_order();
    printf("\nOptimal parenthesization is :\n");
    print_optimal_parens(1,n-1);
    printf("\n\nm table:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    printf("\ns table:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}