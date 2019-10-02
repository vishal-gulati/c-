#include<stdio.h>
int main()
{
	int i;
	struct data
	{
		char name[50];
		int roll;
		int marks;
	};
	struct data a[5];
	for(i=0;i<5;i++)
	{
		scanf("%s %d %d",&a[i].name,&a[i].roll,&a[i].marks);
	}
	for(i=0;i<5;i++)
    {
		printf("%s \n %d \n %d\n ",a[i].name,a[i].roll,a[i].marks);
}
}

