#include<stdio.h>
#include<stdlib.h>
struct sll
{
	int val;
	struct sll *next;
};
struct sll *start = NULL;
void creatlist ();
int main ()
{
	int choice;
	while(1)
	{
		printf("\n\t1 creat a single linked list\n");
		printf("\n15 Exit\n");
		printf("\nEnter your choice :\n");
		scanf("%d" ,&choice);
		switch (choice)
		{
			case 1:
				creatlist();
				break;
			case 15:
				exit (1);
				break;
			default:
				printf("\nincorrect choice\n");
		}
	}
	return 0;
}
void creatlist ()
{
	struct sll *temp;
	int i;
	char ch;
	printf("\n Enter the val of sll\n");
	scanf("%d" ,&temp->val);
	temp->next = NULL;
	printf("\nEnter any character to continue and q to quit\n");
	scanf("%c" ,&ch);
	while(ch!='q')
	{
		temp->next = (struct sll *)malloc(sizeof(struct sll));
		if(temp->next == NULL)
		{
			printf("\nMemory is not allocated\n");
			exit(1);
		}
		temp = temp->next;
		printf("\n Enter the val of node\n");
		scanf("%d" ,&temp->val);
		temp->next = NULL;
		printf("\nEnter q to quit or any character to continue\n");
		scanf("%c" ,&ch);
	}
}