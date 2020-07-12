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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                cout<<n/i<<" "<<n-n/i<<endl;
                goto u;
            }
        }
        cout<<1<<" "<<n-1<<endl;
        u:;
    }
    return 0;
}
