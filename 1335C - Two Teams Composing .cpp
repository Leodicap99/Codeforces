#include<bits/stdc++.h> 
using namespace std; 
#define ll long long
int main() 
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n],m=0,count=0;
        unordered_map<ll,ll> map;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            map[arr[i]]++;
            m=max(m,map[arr[i]]);
        }
        ll diff=map.size();
        cout<<max(min(m-1,diff),min(m,diff-1))<<endl;
    }
    return 0;
} 
