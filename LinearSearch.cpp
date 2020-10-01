#include<iostream>
using namespace std;
void linearsearch(int arr[],int n,int f)
{
    bool found=false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==f){
            cout<<"The required Number"<<f<<"Found at index"<<i;
            found=true;
            break;
        }
    }
    if(!found)
    cout<<"The Number Not Found";
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    cout<<"Enter the number to find"<<endl;
    int b;
    cin>>b;
linearsearch(arr,n,b);
    return 0;
}