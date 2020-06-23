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
		sort(arr.rbegin(),arr.rend());
		for(int i=0;i<k;i++)cin>>x[i];
		sort(x.begin(),x.end());
		int ans=0;
		for(int i=0;i<k;i++)
			ans+=arr[i];
		int i=k-1,z=0;
		for(int j=0;j<k;j++)
		{
			if(x[j]==1)
			{
				ans+=arr[z];
				z++;
			}
			else
			{
				i+=x[j]-1;
				ans+=arr[i];
			}
		}
		cout<<ans<<endl;
	}
}
