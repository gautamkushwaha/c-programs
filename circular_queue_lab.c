#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#define SIZE 5
int items[SIZE];
int front=-1,rear=-1;
//check if the queue is full
int isfull(){
  if((front==rear+1)||(front==0 && rear== SIZE-1))return 1;
  return 0;
}
//check if the queue is empty
int isEmpty(){
  if(front==-1)return 1;
  return 0;
}
//adding an element
void enQueue(int element){
  if(isfull())
  printf("\n Queue is full\n");
  else{
    if(front==-1)front=0;
    rear=(rear+1)%SIZE;
    items[rear]=element;
    printf("\n inserted ->%d",element);
  }
}
//Removing an element
int deQueue(){
  int element;
  if(isEmpty()){
    printf("\n Queue is empty!!\n");
    return(-1);
  }else{
    element=items[front];
    if(front==rear){
      front=-1;
      rear=-1;
    }
    //Queue has only one element, so we reset the queue after dequeing it.
    else{
      front=(front+1)%SIZE;
    }
    printf("\n Deleted element ->%d\n",element);
    return (element);
  } 
 }
 //Display the queue
 void display(){
   int i;
   if(isEmpty())
   printf("\n Empty Queue \n");
   else{
     printf("\n front->%d ",front);
     printf("\n items");
     for(i=front;i!=rear;i=(i+1)%SIZE)
     {
       printf("%d",items[i]);
     }
   printf("%d",items[i]);
   printf("\n Rear->%d\n",rear);
   }
  }
  int main(){
    int choice,item;
  do{
      printf("1.Enqueue\n2.Deque\n3.Display\n4.Exit\n");
      printf("\n Enter your choice\n");
      scanf("%d",&choice);
      switch(choice)
    {
    case 1:
    printf("\n input the element for adding in queue:");
    scanf("%d",&item);
    enQueue(item);
    break;
    case 2:
    deQueue(item);
    break;
    case 3:
    exit(1);
    default:
    printf("\n Wrong choice\n");
    printf("\nfront=%d,rear=%d\n",front,rear);
    display();
      }
   } while(choice!=5);
   return 0;
  }

