#include<iostream>
#include<algorithm>
using namespace std;
int bs(int arr[],int s,int e,int val)
{
if(e>=s)
{
    int mid=s+(e-s)/2;
    if(val==arr[mid])
        return mid;
    if(arr[mid]<val)
        return bs(arr,mid+1,e,val);
    return bs(arr,s,mid-1,val);

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
    int x;
    cin>>x;
    cout<<bs(arr,0,n-1,x);
}