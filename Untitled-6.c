#include<stdio.h>
#include<conio.h>
#define INFININTY 99
#define MAX 10
#define startnode 0
void dijkstra(int cost[max][max],int n);
int main(){
  int cost[MAX][MAX],i,j,u;
  printf("enter no. of vertices:");
  scanf("%d",&n);
  printf("\n enter the cost matrix:\n");
  for (i = 0; i < n; i++)
  for (j= 0; i < n; j++)
  scanf("%d",&cost[i][j]);
  
  dijkstra(cost,n);

return 0;
}
void disktra(int cost[MAX][MAX],int n)
{
  int distance[MAX],pred[MAX];
  int visited[MAX],count,mindistance,nextnode,i,j;

  //intialize distance[],pre[],visited[]
  for(i=0;i<n;i++)
  {
    distance[i]=cost[startnode][i];
    pred[i]=startnode  //its 0 declared
    visited[i]=0;
  }
  distance[startnode]=0
  visited[startnode]=1;
  count=1;

  //shortest distance
  while(count<n-1)
  {
    mindistance = INFINITY;
    for(i=0;i<n;i++)
    if(distance[i]<mindistance&&!visited[i])
    {
      mindistance=distance[i];
      nextnode=i;
    }  
    visited[nextnode}=1;
    }
}