    #include <bits/stdc++.h>
    typedef long long ll;
    using namespace std;
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        ll t;
        cin>>t;
        while(t--)
        {
            ll n,k;
            cin>>n>>k;
            ll x=k/(n-1);
            ll rem=k-x*(n-1);
            if(!rem)cout<<n*x-1<<endl;
            else cout<<n*x+rem<<endl;
        }
        return 0;
    }
