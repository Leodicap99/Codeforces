#include <bits/stdc++.h> 
using namespace std; 
#define int long long
# define pii pair<char,int>
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<int> z,o;
        vector<int> ans;
        int x=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(o.empty())
                {
                    x++;
                    z.push(x);
                    ans.push_back(x);
                }
                else
                {
                    int t=o.top();
                    o.pop();
                    z.push(t);
                    ans.push_back(t);
                }
            }
            else
            {
                if(z.empty())
                {
                    x++;
                    o.push(x);
                    ans.push_back(x);
                }
                else
                {
                    int t=z.top();
                    z.pop();
                    o.push(t);
                    ans.push_back(t);
                }
            }
        }
        unordered_set<int> set(ans.begin(),ans.end());
        cout<<(int)set.size()<<endl;
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
