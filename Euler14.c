#include<stdio.h>

//int done[2000000];
long int max;
long int k;
void perform(long int i,long int n,long int j)
{ 
n=n+1;
//printf("\n %ld \n",n);
if(i!=1)
 {
  
   if((i%2)==0)
      {// printf("\n %ld",(i/2));
       // done[(i/2)]=1;
        perform((i/2),n,j);
      }
     else
      {// printf("\n %ld",(3*i)+1);
       // done[(3*i)+1]=1;
        perform((3*i)+1,n,j);
      } 
  }
else  
{
  if(max<n)
   {
     max=n;
     k=j;
   } 

}
}

int main(){
long int i;

/*
for(i=0;i<1000001;i++)
{//printf("\n done %ld\n",i); 
 done[i]=0;
 
}
*/

max=0;



for(i=1000000;i>1;i--)
{
  
    perform(i,0,i);
  
}

//perform(9182,0,9182);

//perform(13,0,13);

printf("\n The number with longest chain is %ld \n",max);

return(0);
}
