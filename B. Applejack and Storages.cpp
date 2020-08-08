#include <bits/stdc++.h> 
using namespace std; 
#define int long long
# define pii pair<int,int>
const int maxn=1e5+5;
signed main() { 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    set<int> a,b,c,d;
    int n;
    cin>>n;
    int arr[maxn];
    memset(arr,0,sizeof(arr));
    int x;
     for(int i=0;i<n;i++){
        cin>>x;
        arr[x]++;
    }
    for(int i=0;i<maxn;i++){
        if(arr[i]>=8){
            d.insert(i);
        }
        else if(arr[i]>=6){
            c.insert(i);
        }
        else if(arr[i]>=4){
            b.insert(i);
        }
        else if(arr[i]>=2){
            a.insert(i);
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        char ch;
        cin>>ch>>x;
        if(ch=='+'){
            arr[x]++;
        }
        else{
            arr[x]--;
        }
        a.erase(x);
        b.erase(x);
        c.erase(x);
        d.erase(x);
        if(arr[x]>=8){
            d.insert(x);
        }
        else if(arr[x]>=6){
            c.insert(x);
        }
        else if(arr[x]>=4){
            b.insert(x);
        }
        else if(arr[x]>=2){
            a.insert(x);
        }
 
        if(d.size()>0){
            cout<<"YES\n";
            continue;
        }
        else if((c.size()>1)||(c.size()>0)&&((a.size())||(b.size()))){
            cout<<"YES\n";
            continue;
        }
        else if((b.size()>1)||(b.size()>0)&&((a.size()>1))){
            cout<<"YES\n";
            continue;
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
