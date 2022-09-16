#include<stdio.h>
#include<stdlib.h>

// helper function to swap two elements
void swap(int *a,int *b)
{
int t=*a;
*a=*b;
*b=t;
}
Quicksort(int arr[],int low,int high)
//int partition(int arr[],int low,int high)
{
  int pivot=arr[low];
  int start=low;
  int end=high;
  while(start<end)
  {
    while(arr[start]<=pivot&&start<end);
   {
    start++;
   }
   while(arr[end]>pivot)
   {
    end--;
   }
   if(start<end)
   {
    swap(&arr[start],&arr[end]);
   }
  }
  swap(&arr[pivot],&arr[end]);
//  return end;
//}
//Quicksort(arr,low,high)
//{
//  if(low<high)
//  {
//     int pi=partition(arr,low,high);
    Quicksort(arr,low,end-1);
     Quicksort(arr,end+1,high);
  }
// FUNCTION TO PRINT AN ARRRAY
void printArray(int arr[],int size)
{
  int low;
  for(low=0;low<size;low++)
  printf("%d",arr[low]);
  printf("\n");
}

// Driver program
int main()
{
  int n,low,size;
  int *arr;
  printf("enter number of elements:\n");
  scanf("%d",&n);
  
  arr=malloc(n*sizeof(*arr));

  for(low=0;low<n;low++)
  {
    printf("enter element %d:\n",low+1);
    scanf("%d",&arr[low]);
  }
  Quicksort(arr,0,n-1);
  printf("sorted array:\n");
  printArray(arr,n);
  getch();
  return 0;
}

