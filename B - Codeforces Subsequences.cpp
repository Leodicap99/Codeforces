#include <bits/stdc++.h> 
using namespace std; 
#define int long long
# define pii pair<int,int>
const int maxn=1e6+5;
signed main() { 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin>>k;
    vector<int> v(10,1);
    string s="codeforces";
    int prod=1;
    while(prod<k)
    {
        for(int i=0;i<v.size();i++)
        {
            prod/=v[i];
            v[i]++;
            prod*=v[i];
            if(prod>=k)break;
        }
    }
    for(int i=0;i<10;i++)
        cout<<string(v[i],s[i]);
}
