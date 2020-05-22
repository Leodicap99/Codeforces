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
            ll n;
            cin>>n;
            ll a,b,sum=0;
            cin>>a;
            for(ll i=1;i<n;i++)
            {
                cin>>b;
                if((a>0&&b>0)||(a<0&&b<0))
                a=max(a,b);
                else
                {
                    sum+=a;
                    a=b;
                }
            }
            sum+=a;
            cout<<sum<<endl;
        }
        return 0;
    }
