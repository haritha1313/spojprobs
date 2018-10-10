#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n!=-1)
    {
        if(n%2)
        {
            n--;
            if(n%3==0)
            {
                n/=3;
                n=n*4+1;
                int t=sqrt(n);
                if(t*t==n)
                {
                    if(t%2)
                        printf("Y\n");
                    else
                        printf("N\n");
                }
                else
                    printf("N\n");
            }
            else
                printf("N\n");
        }
        else
            printf("N\n");
        scanf("%d",&n);
    }
    return 0;
}
