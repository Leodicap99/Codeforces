#include <bits/stdc++.h> 
using namespace std; 
#define int long long
# define pii pair<int,int>
const int maxn=10000007;
int prime[maxn];
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
		int n,k;
		cin>>n>>k;
		vector<int> arr(n),x(k);
		for(int i=0;i<n;i++)cin>>arr[i];
		sort(arr.begin(),arr.end());
		for(int i=0;i<k;i++)cin>>x[i];
		sort(x.begin(),x.end());
		int m=0,ans=0;
		while(x[m]==1)
		{
			ans+=2*arr[n-1];
			n--;
			m++;
		}
		int l=0,r=n-1;
		k--;
		while(k>=m)
		{
			ans+=arr[l]+arr[r];
			l+=x[k]-1;
			r--;
			k--;
		}
		cout<<ans<<endl;
	}
}
