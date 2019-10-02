#include<stdio.h>
void swap(int *a,int *b);
int main()
{
	int a=5,b=3;
	int *p,*q;
	p=&a;
	q=&b;
	swap(p,q);
	return 0;
		
}
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
printf("%d \n %d",*a,*b);	
}
