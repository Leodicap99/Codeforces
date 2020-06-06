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
                    int n;
                    cin>>n;
                    int arr[n];
                    for(int i=0;i<n;i++)cin>>arr[i];
                    for(int i=1;i<n;i++)arr[i]+=arr[i-1];
                    int ans=0,x=0;
                    for(int i=0;i<n-1;i++)
                    {
                        if(arr[i]*3==arr[n-1]*2)ans+=x;
                        if(arr[i]*3==arr[n-1])x++;
                    }
                    cout<<ans;
                }
