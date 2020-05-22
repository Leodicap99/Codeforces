        #include <bits/stdc++.h>
        typedef long long ll;
        using namespace std;
        int main() {
            ios::sync_with_stdio(0);
            cin.tie(0);
            ll n;
            cin>>n;
            ll arr[n],a[n];
            for(ll i=0;i<n;i++)
            {
                cin>>arr[i];
                a[i]=arr[i];
            }
            ll count=0,ans=0;
            for(ll i=0;i<n;i++)
            {
                for(ll j=i;j<n;j++)
                {
                    ll count=0;
                    for(ll k=i;k<=j;k++)
                    {
                        a[k]=1-a[k];   
                    }
                    for(ll k=0;k<n;k++)
                    {
                        if(a[k])count++;
                    }
                    for(ll k=0;k<n;k++)
                    a[k]=arr[k];
                    ans=max(ans,count);
                }
            }
            cout<<ans;
            return 0;
        }
