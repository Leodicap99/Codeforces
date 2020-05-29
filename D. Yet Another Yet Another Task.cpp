    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++)cin>>arr[i];
    	int ans=0;
    	for(int i=0;i<=30;i++)
    	{
    	    int s=0;
    	    for(int j=0;j<n;j++)
    	    {
    	        if(arr[j]>i)s=0;
    	        else
    	        {
    	            s=max(0,s+arr[j]);
    	            ans=max(ans,s-i);
    	        }
    	    }
    	}
    	cout<<ans<<endl;
        return 0;
    }
