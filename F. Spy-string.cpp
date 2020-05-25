#include<bits/stdc++.h> 
using namespace std; 
#define ll long long
int main() 
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string> v;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        for(int i=0;i<n;i++)
        {
            for(int pos=0;pos<m;pos++)
            {
                string s=v[i];
                for(char ch='a';ch<='z';ch++)
                {
                    s[pos]=ch;
                    bool flag=true;
                    for(auto &x:v)
                    {
                        int total=0;
                        for(int j=0;j<x.size();j++)
                        {
                            if(s[j]!=x[j])total++;
                        }
                        
                        if(total>1)
                        {
                            flag=false;
                            break;
                        }
                    }
                    if(flag)
                    {
                        cout<<s;
                        goto end;
                    }
                }
            }
        }
        cout<<"-1";
        end:
        cout<<endl;
    }
    return 0;
} 
