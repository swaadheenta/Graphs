#include<bits/stdc++.h>
using namespace std;

void printpath(int s,map<int,vector<int>>mp,map<int,bool>&visited,vector<int> & ans)
{
    visited[s]=true;
    vector<int>v=mp[s];
    ans.push_back(s);
    for(int i=0;i<v.size();i++)
    {
        if(visited[v[i]]==false)
        {
            
              printpath(v[i],mp,visited,ans);
        }
          
    }
   
    
}
int main()
{
   map<int,bool>visited;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       visited[i]=false;
   }
   int e;
   cin>>e;
 
   map<int,vector<int>>mp;
   while(e--)
   {
       int f,l;
       cin>>f>>l;
       mp[f].push_back(l);
       mp[l].push_back(f);
   }
   vector<vector<int>>finalans;
   for(int i=0;i<n;i++)
   {
            if(visited[i]==false)
            {
                vector<int>ans;
                printpath(i,mp,visited,ans);
                finalans.push_back(ans);
            }
   }
   for(int i=0;i<finalans.size();i++)
   {
       for(int j=0;j<finalans[i].size();j++)
       {
           cout<<finalans[i][j]<<" ";
       }
       cout<<"\n";
   }
}