#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s[10][10],m,n,i,j,k=0,size=0;
	printf("Enter element of row and column \n");
	scanf("%d%d" ,&m ,&n);
	printf("Enter element to matrix :\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d" ,&s[i][j]);
	printf("The matrix is :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t" ,s[i][j]);
			if(s[i][j] !=0)
			size++;
		}
		printf("\n");
	}
	int M[3][size];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(s[i][j]!=0)
			{
				M[0][k]=i;
				M[1][k]=j;
				M[2][k]=s[i][j];
				k++;
			}
	printf("Triplet of the Matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<size;j++)
		printf("%d\t" ,M[i][j]);
		printf("\n");
	}
	return 0;
}