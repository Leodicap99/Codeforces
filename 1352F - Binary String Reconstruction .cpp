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
        int n0,n1,n2;
        cin>>n0>>n1>>n2;
        string ans;
        if(n1==0)
        {
            if(n0!=0)
            cout<<string(n0+1,'0')<<endl;
            else 
            cout<<string(n2+1,'1')<<endl;
            continue;
        }
        for(int i=0;i<n1+1;i++)
        {
            if(i&1)ans+='0';
            else ans+='1';
        }
        ans.insert(1,string(n0,'0'));
        ans.insert(0,string(n2,'1'));
        cout<<ans<<endl;
    }
    return 0;
} 
