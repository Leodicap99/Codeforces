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
                        int a,b,c,ans=0;
                        cin>>a>>b;
                        if(a>b)
                        {
                            c=a;
                            a=b;
                            b=c;
                        }
                        while(a<b)
                        {
                            a*=8;
                            ans++;
                        }
                        if(a!=b)
                        {
                            if(b*2!=a && b*4!=a)
                            {cout<<-1<<endl;
                            continue;
                            }
                        }
                        cout<<ans<<endl;
                    }        
                }
