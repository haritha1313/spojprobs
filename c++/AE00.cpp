#include <bits/stdc++.h>
using namespace std;
int factor(int num){
int count=0;
for(int i=1;i<=num;i++)
{
    if(num%i==0)
    count++;
    }
    return count;
}

int main() {
    int N;
    cin>>N;
    int ans;
    for(int i=1;i<=N;i++){
        int temp=factor(i);
        if(temp%2==0)
            ans=ans+temp/2;
        else
            ans=ans+temp/2+1;
    }
    cout<<ans<<endl;
    return 0;
}
     
