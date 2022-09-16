//implementation of deque
#include<stdio.h>
#include<stdlib.h>
#define MAX 7
int deque_arr[MAX];
int front=-1;
int rear=-1;

void insert_frontEnd(int item);
void insert_rearEnd(int item);
int delete_frontEnd();
int delete_rearEnd();
void displa();
int isEmpty();
int isFull();

int main(){
	int choice,item;
	while(1)
	{
		printf("\n\n1.inset at the front end\n");
		printf("2.insert at the rear end\n");
		printf("3.Delete from front end\n");
		printf("4.Delete from rear end\n");
		printf("5.Display\n");
		printf("6.Quit\n");
		
		 printf("\n Enter your choice:\n");
		 scanf("%d",&choice);
		 
		switch(choice)
		{
			case 1:
				printf("\n input the element for adding in queue:");
				scanf("%d",&item);
				insert_frontEnd(item);
				break;
			case 2:
				printf("\n input the element for adding in queue:");
				scanf("%d",&item);
				insert_rearEnd(item);
				break;
			case 3:
				printf("\n Element deleted from fron end is:%d\n:",delete_frontEnd());
				break;
			case 4:
				printf("\nElement deleted from rear end is:%d\n",delete_rearEnd());
				break;
			case 5:
				display();
				break;
			case 6:
				exit(1);
			default:
				printf("\n Wrong choice\n");
		}
		/*End of swithch*/
		printf("\n front=%d, rear=%d\n",front,rear);
		display();
	}
//	end of main()

void insert_frontEmnd(int item)
{
	if(isFull())
	{
		printf("\n Queue Overflow\n");
		return;
	}
	of(front==-1)//if queue is initially empty
	{
		front=0;
		rear=0;
	}
	else if(front==0)
	front=MAX-1;
	else
	front=front-1;
	deque_arr[front]=item;
}//end of insert_frontEnd()

void insert_rearEnd(int item)
{
	if(isFull())
	{
		printf("\n Queue overflow\n");
		return;
	}
	if(front==-1)//if queue is initially empty
	{
		front=0;
		rear=0;
	}
	else if(rear==MAX-1)//rear is at last position of queue
	rear=0;
	else
	rear=rear+1;
	deque_arr[rear]=item;
}//end of insert_rearEnd()
void display()
{
int front=left,rear=right;
	if(front==-1)
	printf("\nQueue is Empty\n");
	return;
	else
	{
		int i;
		printf("\nElement of Queue are:");
		for(i=MAX;i>=0;i--)
		printf("%d",deque_arr[i]);
	}
}
int delete_frontEnd()
{
	int item;
	if(isEmpty())
	{
		printf("\nQueue Underflow\n");
		exit(1);
	}
	item=deque_arr[front];
	if(front==rear)//queue has only one element
      {
      	front=-1;
      	rear=-1;
	  }
	  else
	  if(front==MAX=-1)
	  	front=0;
	  	else
	  	front=front+1;
	  	return item;
}//End of delete_rearEnd()
int isFull()
{
	if((front==0&&rear==MAX-1)||(front==rear+1))
	return 1;
	else
	return 0;
}//end of isFull
int isEmpty()
{
	if(front==-1)
	return 1;
	else
	return 0;
}//end of isEmpty


}
