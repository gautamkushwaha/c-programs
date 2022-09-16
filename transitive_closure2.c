#include<stdio.h>
#include<stdlib.h>
// int a[10][10];
void main(){
  int i,j,k,n=5;
//   printf("\n enter the number of vertices:\n");
//   scanf("%d",&n);
//   printf("enter the adjacency matrix\n");
//   for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//       scanf("%d",a[i][j]);
// }
// printf(" ");}
 int a[n][n] = {
  {0,1,0,0},
  {0,0,0,1},
  {1,0,0,0},
  {1,0,0,0}
  };
  for(k=0;k<n;k++){
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      a[i][j]=a[i][j]||a[i][k]&&a[k][j];
}
}
}
  printf("\n the transitive closure is:\n");
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++){
      printf("\t %d",a[i][j]);
      printf("\n");
    }
  }
}