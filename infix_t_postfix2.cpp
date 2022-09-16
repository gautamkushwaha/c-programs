#include<stdio.h>
#include<string.h>
char stack[10];
int top=-1;
void push(char ch)
{
	stack[++top]==ch;
}
char pop()
{
	return stack[top--];
}
 
int isOperator(char ch)
{
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
	return 1;
	else 
	return 0;
}
int getPriority(char ch)
{
	switch(ch)
	{
		case '+':
		case '-':return 1;
		break;
		case'*':
        case'/':return 2;
	}
}
int main()
{
	char arr[20],len,i;
	printf("Enter the string:");
	gets(arr);
	len=strlen(arr);
	for(i=0;i<len;i++)
	{
		if(isOperator(arr[i]))
	     {
	     	while(getPriority(stack[top]>getPriority (arr[i]))&&(top>=0))
	     	{
	     		printf("%c",pop());
				 }
				 push(arr[i]);
			 }
			 else
			 {
			 	printf("%c",arr[i]);
			 }
			 }	
//			 puts(arr)
while(top!=-1){
	printf("%c",pop());
}
return 0;	
}
	

