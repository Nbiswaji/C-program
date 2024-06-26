#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int top = -1,max=10,j=0;
void push(char[],char);

char pop(char[]);
int operator(char);
int precedence(char);
void main(){
	int i=0;
	char stack[10];
	char infix[10],postfix[10];
	printf("enter infix");
	scanf("%s",infix);
	while(infix[i] != '\0'){
		if(isalpha(infix[i])||isdigit(infix[i])){
			postfix[j]=infix[i];
			j++;
		}
		else if(infix[i] == '('){
			push(stack,infix[i]);
		}
		else if(infix[i]==')'){
			while(stack[top]!='('){
				postfix[j]=pop(stack);
				j++;
			}
			pop(stack);
		}
		else if(operator(infix[i])==1){
			if(precedence(infix[i])>precedence(stack[top])){
				push(stack,infix[i]);
			}
			else{
				while(precedence(infix[i])<=precedence(stack[top])){
					postfix[j]=pop(stack);
					j++;

				}
				push(stack,infix[i]);
			}
		}
		i++;

	}
	if(top!=-1){
		while(top!=-1){
			postfix[j]=pop(stack);
			j++;
		}
	}
	postfix[j]='\0';
	printf("the postfix: %s",postfix);
}
int operator(char x){
	switch(x){
		case '^':
		case '*':
		case '/':
		case '+':
		case '-':
			return 1;
		default:
			return 0;
	}
}
void push(char st[], char ele){
	if(top==max){
		printf("stack overflow");
	}else{
		st[++top]=ele;
	}
}
char pop(char st[]){
	if(top==-1){
		printf("stack underflow");
	}else{
		return(st[top--]);
	}
}

int precedence(char x){
	if(x == '^')
		return 4;
	else if(x == '*' || x=='/')
		return 3;
	else if(x == '+'|| x=='-')
		return 2;
	else
		return 0;
}
