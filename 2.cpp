#include<iostream>
using namespace std;
int main(){
    int arr[4][2];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        cin>>arr[i][j];
    }
    for(int i=3;i>=1;i--)
    {
        for( int j=0;j<i;j++)
        {if (arr[j][0]>arr[j+1][0])
        {
            int m,n;
            m=arr[j+1][0];
            n=arr[j+1][1];
            arr[j+1][0]=arr[j][0];
            arr[j+1][1]=arr[j][1];
            arr[j][0]=m;
            arr[j][1]=n;
        }
        }
    }
    int time=arr[0][0];
    int j=0;
     while(time>=arr[j][0])
     {if(j<=3)
         j++;
     }
     for(int i=j;i>=1;i--)
     {
         for(int k=0;k<i;k++)
         {
             if(arr[k][1]>arr[k+1][1])
             {
                 int m=arr[k+1][1];
                 arr[k+1][1]=arr[k][1];
                 arr[k][1]=m;
             }
         }
     }
     int q=0;
     for(int k=0;k<j;k++)
{
    time=time+arr[k][1];
     while(time>=arr[j][0])
     {if(j<=3)
         j++;
         q++;
     }
     for(int i=j;i>=1;i--)
     {
         for(int k=0;k<i;k++)
         {
             if(arr[k][1]>arr[k+1][1])
             {
                  int m=arr[k+1][1];
                 arr[k+1][1]=arr[k][1];
                 arr[k][1]=m;
             }
         }
     }
}
while(j<=3){
	if(time<arr[j][0])
    time=arr[j][0];
    while(time>=arr[j][0])
     {if(j<=3)
         j++;
     }
     for(l=q;l<j;l++)
     {
     for(int i=j;i>=1;i--)
     {
         for(int k=0;k<i;k++)
         {
             if(arr[k][1]>arr[k+1][1])
             {
                  int m=arr[k+1][1];
                 arr[k+1][1]=arr[k][1];
                 arr[k][1]=m;
             }
         }
     }
     time=time+arr[q][1];
}
}
cout<<"\n"<<time;
return 0;
     
     
}
