#include<stdio.h>
int main(){
int i,j;
long int a[50][50];
for(i=1;i<21;i++)
{
  a[i][1] = (i+1);
  a[1][i] = (i+1);
 // printf(" \n %d \t %d \n",i,a[i][1]);
}

for(i=2;i<21;i++)
{
  for(j=i;j<21;j++)
   {
     a[i][j]=a[i][(j-1)] + a[(i-1)][j];
     a[j][i]=a[i][j];
     printf("\n %d \t  %d \t  %ld \n",i,j,a[i][j]);
   }
}

printf("\n %ld \n",a[20][20]);

return(0);
}
