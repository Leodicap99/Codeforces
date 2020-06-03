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
            string s,bad;
            int k;
            cin>>s>>bad>>k;
            unordered_set<int> st;
            for(int i=0;i<(int)s.size();i++)
            {
                int t=k,a=0;
                for(int j=i;j<s.size();j++)
                {
                    if(bad[s[j]-'a']=='0')t--;
                    if(t<0)break;
                    a*=(53);
                    a+=(s[j]-'a'+1);
                    a%=((int)1e14+7);
                    st.insert(a);
                }
            }
            cout<<(int)st.size();
        }
