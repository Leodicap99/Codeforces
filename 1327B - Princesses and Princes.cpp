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
            ll arr[n]={0},p=1e5;
            for(ll i=0;i<n;i++)
            {
                ll k,check=0;
                cin>>k;
                while(k--)
                {
                    ll a;
                    cin>>a;
                    if(arr[a-1]==0 && check==0)
                    {
                        arr[a-1]=1;
                        check=1;
                    }
                }
                if(check==0)
                p=i;
            }
            ll p1;
            for(ll i=0;i<n;i++)
            {
                if(arr[i]==0)p1=i+1;
            }
           if(p!=1e5)
           {
               cout<<"IMPROVE"<<endl;
               cout<<p+1<<" "<<p1<<endl;
           }
           else
           cout<<"OPTIMAL"<<endl;
        }
        return 0;
    }
