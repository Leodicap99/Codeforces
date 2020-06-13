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
                        int n,m;
                        cin>>n>>m;
                        vector<int> zeroes(n+m-1,0),ones(n+m-1,0);
                        for(int i=0;i<n;i++)
                        {
                            for(int j=0;j<m;j++)
                            {
                                int x;
                                cin>>x;
                                if(x)ones[i+j]++;
                                else zeroes[i+j]++;
                            }
                        }
                        int ans=0;
                        for(int i=0,j=n+m-2;i<j;i++,j--)
                        {
                            ans+=min(zeroes[i]+zeroes[j],ones[i]+ones[j]);
                        }
                        cout<<ans<<endl;
                    }
 
                }
