#include <bits/stdc++.h> 
using namespace std; 
#define int long long
# define pii pair<int,int>
const int maxn=1e6+5;
void solve(vector<vector<int>> arr,int n,int m)
{
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int s=(i-1>=0)+(j-1>=0)+(i+1<n)+(j+1<m);
                if(arr[i][j]>s)
                {
                    cout<<"NO"<<endl;
                    return;
                }
                arr[i][j]=s;
            }
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)cout<<arr[i][j]<<" ";
                cout<<endl;
        }
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
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)cin>>arr[i][j];
        }
        solve(arr,n,m);
    }
    return 0;
}
