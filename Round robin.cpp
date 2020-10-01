#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,d,b,c;
    int a[n][3];
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<3;j++)
         cin>>a[i][j];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i][1]>a[j][1])
            {
			 d=a[i][0];
            b=a[i][1];
             c=a[i][2];
            a[i][0]=a[j][0];
            a[i][1]=a[j][1];
            a[i][2]=a[j][2];
            a[j][0]=d;
            a[j][1]=b;
            a[j][2]=c;}
        }
    }
    int t=a[0][1];
    int temp=n;
	while(temp!=0)
	{
		for(int i=0;i<n;i++)
		{

			if(t>=a[i][1] && a[i][2]!=0)
			{
				a[i][2]--;
				cout<<a[i][0]<<" ";
						
				if(a[i][2]==0)
				{
					temp--;
				}
				t++;
			}

		}
	}
	return 0;
}

