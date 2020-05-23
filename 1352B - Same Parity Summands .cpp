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
            if(k>n)
            {
                cout<<"NO"<<endl;
                continue;
            }
            ll q=n/k,r=n%k;
            if(r==0)
            {
                cout<<"YES"<<endl;
                for(ll i=0;i<k;i++)
                cout<<q<<" ";
                cout<<endl;
            }
            else if((q+r)%2==0 && q%2==0)
            {
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++)
                cout<<q<<" ";
                cout<<q+r<<endl;
            }
            else if((q+r)%2!=0 && q%2!=0)
            {
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++)
                cout<<q<<" ";
                cout<<q+r<<endl;
            }
            else
            {
                if((k-1)%2!=0)cout<<"NO"<<endl;
                else if(q==1)cout<<"NO"<<endl;
                else
                {
                    cout<<"YES"<<endl;
                    for(ll i=0;i<k/2;i++)
                    cout<<q+1<<" "<<q-1<<" ";
                    cout<<q+r<<endl;
                }
            }
        }
        return 0;
    }
