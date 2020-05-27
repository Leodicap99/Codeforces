    #include<bits/stdc++.h> 
    using namespace std; 
    #define ll long long
    #define mod (int)(1e9 + 7) 
    using pii=pair<ll,ll>;
    int main() 
    { 
        ios::sync_with_stdio(0);
        cin.tie(0);
        int t;
        cin>>t;
        while(t--)
        {
            ll x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;
            cout<<(x2-x1)*(y2-y1)+1<<endl;
        }
        return 0;
    } 
