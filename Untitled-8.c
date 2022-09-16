#include<stdio.h>
#include<stdio.h>
#define f=0,r=-1;
int a[20][20],q[20],visited[20],n,i,j:

void bfs(int v)
{
  for(i=1;i<=n;i++)
  if(a[v][i]&&!visited[i])
  {
    q[++r]=i;
    if(f<=r)
  {
    visited(q[f])=1;
    bfs(q[f++]);
  }
  }

}
int main(){
  int v;
  // printf("enter the number of vertices:");
  // scanf("%d",&n);
  // for(i=1;i<n;i++){
  //   q[i]=0;
  //   visited[i]=0;
  // }
  // printf("\n Enter graph data in matrix form:\n");
  // for(i=0;i<n;i++)
  // for (int j<0;j < n;j++)
  // scanf("%d",&v);
 int  a[3][3] = {
    {2,4,5},
    {2,3,4},
    {1,7,8}};
    
  bfs(2);
  printf("the node whicha are reachable:\n");
  for(i=0;i<n;i++)
  if(visited[i])
  printf("%d/t",i);
  else
  {
    printf("\n BFS is not possible");
    break;
  }
  
  
return 0;
}