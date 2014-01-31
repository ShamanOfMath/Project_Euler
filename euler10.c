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

int i;
long int sum;
sum=0;

i=2;


/*i=prime(i);

printf("\n %d \n",i);
*/
while(i<2000000)
{
  if(prime(i)==1)
   {
     sum=sum+i;
   }

  i++;
 printf("\n %d \n",i);
 printf(" %ld \n",sum);
}

//printf("\n %d \n",sum);

return(0);
}
