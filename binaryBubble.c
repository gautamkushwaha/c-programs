#include<stdio.h>
#include<stdlib.h>
int binarysearch(int array[],int x, int low,int high){
  if(high>=low)
{
  int mid=low+(high-low)/2;
  //if found at mid, then return it
  if(array[mid]==x)
  return mid;
  //search the left
  if(array[mid]>x)
  return binarysearch(array,x,low,mid-1);
  else
  //search the right
  return binarysearch(array,x,mid+1,high);
}
return -1;
}
void bubble(int a[],int s)
{
  int i,j;
  int temp;
  for(i=1;i<s;i++)
  {
    for(j=0;j<s-i;j++)
    {
      if(a[j]>a[j+1])
    {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
    }
    }
  }
}
int main(void){
  int n,i,x,result;
  int *numbers;

printf("Enter numbers of elements:\n");
scanf("%d",&n); 
numbers = malloc (n * sizeof(*numbers));
for(i=0;i<n;i++)
{
  printf("enter elments %d:\n",i+1);
  scanf("%d",&numbers[i]);
}
//sort the array using bubble sort
bubble(numbers,n);
printf("\n");
printf("Enter the elements to be searched:\n");
scanf("%d",&x);
result=binarysearch(numbers,x,0,n-1);
if(result==-1)
printf("Not found");
else 
printf("element is found at index %d",result+1);
return 0;


}
