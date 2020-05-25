#include<bits/stdc++.h> 
using namespace std; 
#define ll long long
int main() 
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<4)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i=n;i>=1;i--)
        {
            if(i&1)
            cout<<i<<" ";
        }
        cout<<4<<" "<<2<<" ";
        for(int i=6;i<=n;i+=2)
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
} 
