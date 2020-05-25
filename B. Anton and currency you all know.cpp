#include<bits/stdc++.h> 
using namespace std; 
#define ll long long
int main() 
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    ll index=-1,m=11;
    ll check=-1;
    int end=s[s.size()-1]-'0';
    for(ll i=0;i<s.size()-1;i++)
    {
        int x=s[i]-'0';
        if(x%2==0)
        {
            if(end>x)
            {
                index=i;
                break;
            }
            index=i;
        }
    }
    if(index==-1)cout<<-1;
    else 
    {
        swap(s[index],s[s.size()-1]);
        cout<<s;
    }
    return 0;
} 
