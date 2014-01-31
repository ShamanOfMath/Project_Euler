#include<stdio.h>
int nof(long int n)
{
  int count,i;
  
  count=0;
  for(i=1;i<(n+1);i++)
   {
     if((n%i)==0)
      { count++;
      }
   }
  
return(count);

}
int main(){
int i,j,k;
long int n;

n=1;
k=0;

while(k<1)
{
  if(((n*(n+1))/2)%2==0)
   { if((nof(n)+nof(n+1)) > 500)
      {k=1;
      }
   }
   else
   { if((nof(n)+nof(n+1)-1) > 500)
      {k=1;
      }
   }
}

printf("\n %ld \n",n);
return(0);

}

