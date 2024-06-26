#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s[10][10],m,n,i,j,k=0,size=0;
	printf("Enter row and column\n");
	scanf("%d\n%d" ,&m ,&n);
	printf("Enter element to matrix : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d" ,&s[i][j]);
		}
	}
}