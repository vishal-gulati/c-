#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 int q;
    cin>>q;
    if(q>=1&&q<=100)
    {
        for(int i=1;i<=q;i++)
        {
            int a,b;
            cin>>a>>b;
            if(a>=1&&a<=109&&b>=1&&b<=109)
            {
                if(a==1||b==1)
                {
                    cout<<1<<endl;
                }
                else{
                    int n=0;
                    for(int l=1;l<a;l++)
                    {
                        int m=1;
                        while(a*b>l*m)
                        {
                        
                            m++;
                        }
                        n++;
                    }
                    cout<<n<<endl;
                }
            }
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
