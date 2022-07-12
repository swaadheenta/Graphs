#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>adjlist[n+1];
    while(e--)
    {
        int u,v;
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
           cout<<i<<" -> ";
        for(auto x:adjlist[i])
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    
    
}