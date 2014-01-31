#include<stdio.h>
int palin(int n)
{
int k,rev,rem;
k = n;
rev=0;
/* logic */
while (n > 0){

    rem = n % 10;
    rev = rev * 10 + rem;
    n = n / 10; 

}
if (k == rev){

   return(1);
}
else{

    return(0); 

}
}
int main(){
int i,j;
int a[1000],max;

//max=palin(900);

for(i=999;i>99;i--)
{
 printf("\n Enter \n");
 j=999;
 while((j>99)&&(palin(i*j)==0))
  { 
    j--;
  }
//  printf("\n %d \n",j);
  a[i]=(i*j); 
  
}


max=a[100];

for(i=100;i<1000;i++)
{
 
 if(max<a[i])
  {
    max=a[i];
  }
}

//printf("\n %d %d \n",a[91],a[99]);

printf("\n %d \n",max);

return(0);
}

