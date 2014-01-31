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

int mod(int a)
{
   if(a<0)
     return(-a);
   else
     return(a);
}
int main(){


int a,b,max,i,j,neg_a,pos_a,neg_b,pos_b;
int count[1000][1000];
//int countpos_neg[2000][2000];
//int countneg_neg[2000][2000];
//int countneg_pos[2000][2000];
//printf("\n YOY\n");

for(b=999;b>=0;b--) 
{
  for(a=999;a>=0;a--) 
   { count[a][b]=0;
   }
}




for(b=0;b>=(-999);b--) 
   {
     if(prime(mod(b))==1)   
      { 
         for(a=999;a>=0;a--)          
          { 
           if((a%2)!=0)   
           {
           printf("\n Checking for b=%d,a=%d\n",b,a);
            i=0;
            while(prime(mod((i*i)+(a*i)+b))==1)
              {
               
                count[mod(a)][mod(b)]++;
                
                i++;
              }   
            } 
         }
       }
   }

max=count[999][999];
i=999;
j=999;

for(b=999;b>=0;b--) 
{
  for(a=999;a>=0;a--) 
   { if(max<count[mod(a)][mod(b)])
       {  max=count[mod(a)][mod(b)];
          i=a;
          j=-b;
       }  
   }
   
   
}



printf("\n the product is %d\n max value is %d\n a = %d , b= %d \n",(i*j),max,i,j);

return(0);
}
