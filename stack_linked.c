#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct cell{
  int val;
  struct cell*next;
}cell;
cell*head=NULL;
void push(int);
int pop();
void display();
void main()
{
  int value,choice;
  while(1){
    printf("\n\n ***********MENU*********\n\n");
    printf("1.push\n 2.pop\n 3.Display\n 4.Exit");
    printf("\n Enter your choice:\n");
    scanf("%d",&choice);
    switch(choice){
      case 1:printf("Enter the value to ve inserted:");
      scanf("%d",&value);
      push(value);
      break;
      case 2:pop();
      break;
      case 3:display();
      case 4:exit(0);
      default:printf("\nWrong selection!!!!! Try again!!!!");
    }
  }
}
void push(int s)
{
  cell*newcell=(cell*)malloc(sizeof(cell));//ALLOCATe memory to a node
  newcell->val=s;//insert the item
  newcell->next=head;
  head=newcell;//move head to new node
  printf("inserted",s);
}
int pop()
{
  int top;
  cell*old;
  if(head==NULL)
     printf("pop empty stack error \n");
  else
  top=head->val;
  old=head;
  head=head->next;
  free(old);
  printf("%d popped",top);
  return top;
}
void display()
{
  if(head==NULL)
  printf("\n stack is empty!!!\n");
  else{
    cell*temp=(cell*)malloc(sizeof(cell));
    temp=head;
    while(temp->next!=NULL)
    {
      printf("%d\n",temp->val);
      temp=temp->next;
    }
    printf("%d",temp->val);
  }
}