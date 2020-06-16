             #include <bits/stdc++.h> 
                using namespace std; 
                #define int long long
                # define pii pair<int,int>
                const int maxn=10000007;
                int prime[maxn];
                void sieve()
                {
                    for(int i=2;i<maxn;i++)
                    {
                        if(prime[i]==0)
                        {
                            for(int j=i;j<maxn;j+=i)
                            prime[j]=i;
                        }
                    }
                }
                signed main() { 
                    #ifndef ONLINE_JUDGE
                    freopen("input.txt","r",stdin);
                    freopen("output.txt","w",stdout);
                    #endif
                    ios::sync_with_stdio(0);
                    cin.tie(0);
                    sieve();
                    int n;
                    cin>>n;
                    int arr[n];
                    for(int i=0;i<n;i++)
                    {
                        cin>>arr[i];
                        int m=prime[arr[i]];
                        while(arr[i]%m==0)arr[i]/=m;
                        if(arr[i]>1)cout<<m<<" ";
                        else{ cout<<-1<<" ";
                        arr[i]=-1;
                        }
                    }
                    cout<<endl;
                    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
                    
                }
