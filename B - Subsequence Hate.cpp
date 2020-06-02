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
                string s;
                cin>>s;
                int ans,z=0,o=0;
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]=='1')o++;
                    else z++;
                }
                ans=min(o,z);
                int d_z=0,d_o=0;
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]=='0')d_z++;
                    else d_o++;
                    ans=min(ans,d_z+o-d_o);
                    ans=min(ans,d_o+z-d_z);
                }
                cout<<ans<<endl;
            }
        } 
