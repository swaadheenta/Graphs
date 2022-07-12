#include<bits/stdc++.h>
using namespace std;
vector<int>getbfs(int n,vector<int>adj[])
{
    vector<int>ans;
    vector<int>visited(n+1,0);   // all are initially not visited !!
    for(int i=1;i<=n;i++)
    { 
        if(!visited[i]) // if a particular vertex is not visited !!
        {
          queue<int>q;
          q.push(i);
          visited[i]=1;
         while(!q.empty())
         {
             int val=q.front(); // taking out the first element !!
             q.pop();
             ans.push_back(val);  // putting it int the ans node !!
             for(auto x:adj[val])
            {
               if(!visited[x])
              {
                q.push(x);
                visited[x]=1;
               }
            }

         }
          
        }
          
    }
    return ans;
}
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
    getbfs(n,adjlist);
    
}
