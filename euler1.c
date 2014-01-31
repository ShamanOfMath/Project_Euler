#include<stdio.h>
main(){
int n,i,j,sum;

sum=0;

for(i=0;i<1000;i++)
{
  if(i%3==0)
   {
    sum=sum+i;
    //printf("\n%d\n",sum);
   }
}

for(i=0;i<1000;i++)
{
  if(i%5==0)
   {
    sum=sum+i;
    //printf("\n%d\n",sum);
   }
}

for(i=0;i<1000;i++)
{
  if(i%15==0)
   {
    sum=sum-i;
    //printf("\n%d\n",sum);
   }
}

printf("\nThe sum is %d \n",sum);
return(0);
}
