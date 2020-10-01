#include<iostream>
#include<algorithm>
using namespace std;
int bsi(int arr[],int s,int e,int val)
{
    while (s <= e) 
    { 
        int m = (s+e)/2; 
        if (arr[m] == val)  
            return m;           
        if (arr[m] < val)  
        s = m + 1;  
        else 
        e = m - 1;  
    } 
    return -1; 
}

int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"Enter the value to be searched"<<endl;
    int val;
    cin>>val;
    cout<<bsi(arr,0,n-1,val);
    return 0;
}
