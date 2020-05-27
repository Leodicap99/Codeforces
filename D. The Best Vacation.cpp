#include <bits/stdc++.h> 
using namespace std; 
#define int long long
signed main() { 
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int arr[2*n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    	arr[n+i]=arr[i];
    }
    vector<int> B={0},C={0};
    n*=2;
    for(int i=0;i<n;i++)
    	B.push_back(B.back()+arr[i]);
    for(int i=0;i<n;i++)
    	C.push_back(C.back()+(arr[i]*(arr[i]+1))/2);
    int ans=0;
    for(int i=0;i<n;i++)
    {
    	if(B[i+1]>=k)
    	{
    		int z=upper_bound(B.begin(),B.end(),B[i+1]-k)-B.begin();
    		int count=C[i+1]-C[z];
    		int days=B[i+1]-B[z];
    		int too=k-days;
    		count+=(arr[z-1]*(arr[z-1]+1)/2);
    		count-=(arr[z-1]-too)*(arr[z-1]+1-too)/2;
    		ans=max(ans,count); 
    	}
    }
    cout<<ans;
} 
