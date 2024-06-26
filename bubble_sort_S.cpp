#include<stdio.h>
main ()
{
	int arr[100],size,i,j,k,temp;
	printf("\nEnter size of arry\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter value\n");
		scanf("%d",&arr[i]);
	}
	printf("\nBefore sorting\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	for(k=0;k<size-1;k++)
	{
		for(j=0;j<size-1-k;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\nAfter sorting\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
