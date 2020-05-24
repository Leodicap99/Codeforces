#include<bits/stdc++.h> 
using namespace std; 
int a[3001];
int main() 
{ 
    int n,ans=0;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(a[i]==0)
        for(int j=i;j<=n;j+=i)
        a[j]++;
        if(a[i]==2)ans++;
    }
    cout<<ans;
    return 0;
} 
