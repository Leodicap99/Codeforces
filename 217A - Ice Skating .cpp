        #include <bits/stdc++.h>
        using namespace std;
        typedef long long ll;
        int x[1000],y[1000],vis[1000];
        void dfs(int i,int n)
        {
            vis[i]=1;
            for(int j=1;j<=n;j++)
            {
                if(vis[j]!=1 && (x[i]==x[j]||y[i]==y[j]))
                dfs(j,n);
            }
        }
        int main ()
        {
            ios::sync_with_stdio(0);
            cin.tie(0);
            int n,ans=0;
            cin>>n;
            for(int i=1;i<=n;i++)
            cin>>x[i]>>y[i];
            for(int i=1;i<=n;i++)
            {
                if(vis[i]!=1)
                {
                    dfs(i,n);
                    ans++;
                }
            }
            cout<<ans-1;
        	return 0;
        }
