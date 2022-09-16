#include<stdio.h>
int stack[100];
int top=-1;

int isOperator(char ch)
{
	if(ch=='-'||ch=='+'||ch=='/'||ch=='*')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(int ch)
{
	top=top+1;
	stack[top]=ch;
}
int pop()
{
	return stack[top--];
}
void main()
{
	char arr[100];
	int i,a,b,val;
	printf("Enter the postfix expression:");
	scanf("%s",arr);
	for(i=0;arr[i]!='\0';i++)
	{
		if(isOperator(arr[i]))
		{
			b=pop();
			a=pop();
			switch(arr[i])
			{
				case '+':push(a+b);
				break;
				case '-':push(a-b);
				break;
				case '*':push(a*b);
				break;
				case '/':push(a/b);
				break;
			}
		}
		else
		{
			printf("Enter the value of %c:",arr[i]);
			scanf("%d",&val);
			push(val);
		}
	}
	printf("%d",pop());
}
