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
                int n,x;
                cin>>n>>x;
                vector<int> degree(n+1);
                for(int i=0;i<n-1;i++)
                {
                    int a,b;
                    cin>>a>>b;
                    degree[a]++;
                    degree[b]++;
                }
                if(degree[x]<=1)
                {
                    cout<<"Ayush"<<endl;
                    continue;
                }
                if(n%2)cout<<"Ashish"<<endl;
                else cout<<"Ayush"<<endl;
            }
        } 
