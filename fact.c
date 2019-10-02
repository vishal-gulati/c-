#include<stdio.h>
int main()
{
  long long int i,j=1,sum,r;
   
    for( i=50;i>=1;i--)
    {
j=j*i;
    }
     long long int k=j;
    while(k>0)
    {
r=k%10;
sum=sum+r;
k=k/10.0;
    }
    printf("%li",sum);
    return 0;
}
