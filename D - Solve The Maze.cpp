             #include <bits/stdc++.h> 
                using namespace std; 
                //#define int long long
                # define pii pair<int,int>
                const int maxn=10000007;
                vector<vector<int>> dir={{1,0},{-1,0},{0,-1},{0,1}};
                bool isvalid(int i,int j,int n,int m)
                {
                    return i<n && i>=0 && j<m && j>=0;
                }
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
                        vector<string> v;
                        for(int i=0;i<n;i++)
                        {
                            string s;
                            cin>>s;
                            v.push_back(s);
                        }
                        for(int i=0;i<n;i++)
                        {
                            for(int j=0;j<m;j++)
                            {
                                if(v[i][j]=='B')
                                {
                                    for(auto &a:dir)
                                    {
                                        int x=a[0]+i;
                                        int y=a[1]+j;
                                        if(isvalid(x,y,n,m) && v[x][y]=='.')v[x][y]='#';
                                    }
                                }
                            }
                        }
                        set<pii> s;
                            queue<pii> q;
                        if(v[n-1][m-1]=='.')
                        {
                            q.push({n-1,m-1});
                            s.insert({n-1,m-1});
                        }
                        while(!q.empty())
                        {
                            pii p=q.front();
                            q.pop();
                            for(auto &a:dir)
                            {
                                int x=a[0]+p.first;
                                int y=a[1]+p.second;
                                if(!isvalid(x,y,n,m) || s.find({x,y})!=s.end() || v[x][y]=='#')continue;
                                q.push({x,y});
                                s.insert({x,y});
                            }
                        }
                        bool good=true;
                        for(int i=0;i<n;i++)
                        {
                            for(int j=0;j<m;j++)
                            {
                                if((v[i][j]=='G' && s.find({i,j})==s.end())||(v[i][j]=='B' && s.find({i,j})!=s.end()))
                                {
                                    good=false;
                                    break;
                                }
                            }
                            if(!good)break;
                        }
                        cout<<(good?"Yes":"No")<<endl;
                    }
                    return 0;
                }
