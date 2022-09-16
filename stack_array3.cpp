#include<stdio.h>
#include<conio.h>
#define Size 10
  void push(int);
  void pop();
  void display();
  int stack[Size], top=-1;
  
int main()
{
  int value,choice;
  while(1)
  {
    printf("\n***************MENU*************\n");
    printf("1.push \n 2.pop \n 3.Display \n 4.Exit");
    printf("\n Enter your choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {

      case 1:printf("Enter the value to be inserted:");
      scanf("%d",&value);
      push(value);
      break;
      case 2:pop();
      break;
       case 3:display();
      break;
//      case 4:
//      break;
      default:
      printf("\n Wrong selection !!! Try again!!!!!");
    }
  } 
}  
void push(int value){

  if(top==Size-1)
    printf("\n stack is full!!! Insertion is not possible!!!");
  else
   {
    top++;
    stack[top]=value;
    printf("\n insertion success!!!!");
   }
   }

void pop( )
{
  if(top==-1){
  printf("\n stack is empty!!!! Deletion is not possile!!!");}
  else{
    printf("\n Deleted :%d",stack[top]);
    top--;
  }
}
void display()
{
  if(top==-1)
  {
  printf("\n stack is Empty!!!!");
  }
  else
  {
    int i;
    printf("\n stack elements are:\n");
    for(i=top;i>=0;i--)
    printf("%d\t",stack[i]);
  }
}
