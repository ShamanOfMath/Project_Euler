#include<stdio.h>
main(){
int j,n;
long int i;
i=600851475143;
j=2;

while(i!=j)
{
 if(i%j==0)
  {i=(i/j);
   j=2;
  }
 else
  {j++;
  }
}


printf("\nLargest factor %d\n",j);

return(0);
}
