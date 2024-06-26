#include<stdio.h>
main()
{
	int sprase[30][30],r,c,i,j,nz,triplet[50][3],temp=1;
	printf("\nEnter no. of row and column\n");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter value\n");
			scanf("%d", &sprase[i][j]);
		}
	}
		printf("\n Value of sprase matrix\n");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",sprase[i][j]);
		}
		printf("\n");
	}
	//triplet implition	
	 for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(sprase[i][j] != 0)
			{
				nz ++;
			}
		}
	}
	triplet[0][0]=r;
	triplet[0][1]=c;
	triplet[0][2]=nz;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(sprase[i][j]!=0)
			{
				triplet[temp][0]= i;
				triplet[temp][1]= j;
				triplet[temp][2]= sprase[i][j];
				temp ++;
			}
		}
	}
	printf("\n Value of triplet matrix\n");
		for(i=0;i<nz+1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",triplet[i][j]);
		}
		printf("\n");
	}	
}