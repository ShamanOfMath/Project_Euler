#include<stdio.h>
int main(){
int i,j,n,k;

n=100;

i=((n*(n+1))/2);

i=(i*i);

j=((n*(n+1)*((2*n)+1))/6);

k=i-j;

printf("\n %d \n",k);

return(0);
}
