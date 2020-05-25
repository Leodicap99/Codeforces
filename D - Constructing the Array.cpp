#include<bits/stdc++.h> 
using namespace std; 
#define ll long long
int main() 
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        using pii=pair<int,int>;
        vector<int> arr(n,0);
        using pii=pair<int,int>;
        auto cmp=[](const pii &a,const pii &b)
        {
            int lena = a.second - a.first + 1;
		    int lenb = b.second - b.first + 1;
		    if (lena == lenb) return a.first > b.first;
		    return lena < lenb;
        };
        priority_queue<pii,vector<pii>,decltype(cmp)>pq(cmp);
        pq.push({0,n-1});
        for(int i=1;i<=n;i++)
        {
            pii p=pq.top();
            pq.pop();
            int l=p.first,r=p.second;
            int id=(l+r)/2;
            arr[id]=i;
            if(l<id)pq.push({l,id-1});
            if(id<r)pq.push({id+1,r});
        }
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
} 
