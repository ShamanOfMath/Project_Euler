#include<stdio.h>
int prime(int n)
{ int i;
i=2;
while(i<n)
{ if(n%i==0)
  {
    return(0);
  }
 i++;
}
  
return(1);
}
int main(){

int i,j,n,count;
count=0;

i=2;

while(count<1)
{
  if(prime(i)==1)
   {
     count++;
   }

  i++;
  
}

printf("\n %d \n",i);

return(0);
}
