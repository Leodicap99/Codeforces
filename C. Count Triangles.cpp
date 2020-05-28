    #include <bits/stdc++.h> 
    using namespace std; 
    #define int long long
    # define pii pair<int,int>
    const int maxn=1e6+5;
    int a[maxn];
    signed main() { 
        #ifndef ONLINE_JUDGE
    	freopen("input.txt","r",stdin);
    	freopen("output.txt","w",stdout);
    	#endif
    	ios::sync_with_stdio(0);
        cin.tie(0);
        int A, B, C, D;
        cin>>A>>B>>C>>D;
    for (int i = A; i <= B; i++) {
        a[i + B]++;
        a[i + C + 1]--;
    }
    for (int i = 1; i < maxn; i++)
        a[i] += a[i - 1];
    for (int i = 1; i < maxn; i++)
        a[i] += a[i - 1];
    int ans = 0;
    for (int i = C; i <= D; i++)
        ans += a[maxn - 1] - a[i];
        cout<<ans;
    } 
