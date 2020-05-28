    #include <bits/stdc++.h> 
    using namespace std; 
    #define ll long long
    # define pii pair<int,int>
    const int nmax=1e6+5;
    int bit[nmax];
    int n=nmax;
     
    int sum(int r) {
        int ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }
     
    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }
     
    void add(int idx, int delta) {
        for (; idx < nmax; idx = idx | (idx + 1))
            bit[idx] += delta;
    }
     
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll n,x,y,z,q;
        cin>>n>>q;
        for(ll i=0;i<n;i++){
            cin>>x;
            add(x,1);
        }
        while(q--){
            cin>>x;
            if(x>0){
                add(x,1);
            }
            else{
                x = abs(x);
                ll lo=0,hi=nmax,mid;
                while(hi>lo){
                    mid = (hi+lo)/2;
                    if(sum(mid)>=x){
                        hi = mid;
                    }            
                    else{
                        lo = mid+1;
                    }    
                }
                add(lo,-1);
            }
        }
        
        for(ll i=0;i<nmax;i++){
            if(sum(1,i)>0){
                cout<<i;
                return 0;
            }
        }
     
        cout<<0;
        
        
        
     
        return 0;
    }
