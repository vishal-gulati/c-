#include<stdio.h>
int main()
{
    int n,r,R;
    scanf("%d %d ",&n,&r);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&R);
        if(R>=r)
        printf("Good boi\n");
        
        else
        {
        printf("Bad boi\n");
        }
        
    }
    return 0;
}