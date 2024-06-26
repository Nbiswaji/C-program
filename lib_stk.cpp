#include<stdio.h>
#include<stdlib.h>
#define size 100
int stk[size];
int top = -1;
void push(int[], int);
int pop(int[]);
int Isfull(int[]);
int Isempty(int[]);
void display(int[]);
int main()
{
	int i,ch,ele;
	while (1)
	{
		printf("\n1: push operation\n");
		printf("2: pop operation\n");
		printf("3: isfull verification\n");
		printf("4: isempty verification\n");
		printf("5: Display stack\n");
		printf("6: Exit\n");
		printf("Enter your chioce\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the element to be pushed\n");
				scanf("%d", &ele);
				push(stk,ele);
				display(stk);
				break;
			case 2:
				pop(stk);
				display(stk);
				break;
			case 3:
				Isfull(stk);
				break;
			case 4:
				Isempty(stk);
				break;
			case 5:
				display(stk);
				break;
			case 6:
				exit(0);
				break;
			default :
				printf("Invalid Input\n");
				break;
		}
	}
	return 0;
}
void push(int a[],int x)
{
	if (Isfull(a))
	{
	printf("stack overflow\n");
	exit(0);
	}
	else
	{
		top++;
		a[top] = x;
	}
}
int pop(int a[])
{
	int y;
	if (Isempty(a))
	{
		printf("No element left\n");
		exit(0);
	}
	else
	{
		y = a[top];
		top--;
		return 0;
	}
}
int Isfull(int a[])
{
	if (top ==(size -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int Isempty(int a[])
{
	if (top == -1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
void display(int a[])
{
	int i;
	for(i = 0; i >= 0; i--)
	{
		printf("%d", a[i]);
	}
}