#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    int adjmat[n+1][n+1];
    while(e--)
    {
        int u,v;
        cin>>u>>v;
       adjmat[u][v]=1;
       adjmat[v][u]=1;   
    }
    for(int i=1;i<=n;i++)
    {
           cout<<i<<" -> ";
       for(int j=1;j<=n;j++)
       {
        if(adjmat[i][j]==1)
        {
            cout<<j<<" ";
        }

       }
       cout<<"\n";
    }
}