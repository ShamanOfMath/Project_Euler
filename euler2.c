#include<stdio.h>
main(){
int i,j,n,a[1000];
a[1]=1;
a[2]=2;
i=1;
n=0;
while(a[i]<=4000000)
{ a[i+2]= a[i+1] + a[i];
  
  if(a[i]%2==0)
   {
     n=n+a[i];
     printf("\n%d  %d\n",i,n);
   }
  i++;
  
}

printf("\nThe answer is %d\n",n);

return(0);
}
