#include<stdio.h>
#include<stdlib.h>
int main()
{
	int row,col,i,j,a[10][10],count = 0;
	printf("Enter row & column\n");
	scanf("%d%d" ,&row ,&col);
	printf("Enter Element to Matrix\n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			scanf("%d" ,&a[i][j]);
		}
	}
	printf("Matrix is:\n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%d\t" ,a[i][j]);
			if(a[i][j]==0)
			count++;
		}
			printf("\n");
	}
/*	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j] == 0)
			count++;
		}
	}*/
	if(count >((row * col)/2))
	printf("Matrix is a sparse matrix\n");
	else
	printf("Matrix is not a sprase matrix\n");
}