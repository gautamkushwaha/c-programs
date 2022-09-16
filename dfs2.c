#include<stdio.h>
// int graph[10][10],visited[10],total;
int visited[3]={0,0,0};
int A[3][3]={{0,1,1},{1,0,1},{1,1,0}};
void DFS(int vertex)
{
int j;
printf("%d\t",vertex);
visited[vertex]=1;
for(j=0;j<3;j++)
{
  if(A[vertex][j]&&!visited[j])
  {
    DFS(j);
  }
}
}

int main(){
// int i,j,total;
// printf("\n Enter the total no. of vertices in a graph\n");
// scanf("%d",&total);
// // adjacency matrix input
// printf("\n Enter the adjacency matrix\n");
// for(i=0;i<total;i++)
// {
//   for(j=0;j<total;j++)
//   {
//     scanf("\t%d",&graph[i][j]);
//   }
// }
// printf("the dfs graph is:");
// for(i=0;i<total;i++)
// {
//   visited[i]=0;
      DFS(7);
return 0;
}