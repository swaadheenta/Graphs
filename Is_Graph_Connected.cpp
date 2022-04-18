#include<bits/stdc++.h>
using namespace std;
void get_connected_components(int s,map<int,vector<int>>mp,map<int,bool>&visited,vector<int>&ans)
{
   visited[s]=true;
   vector<int>v=mp[s];
ans.push_back(s);
   for(int i=0;i<v.size();i++)
   {
       if(visited[v[i]]==false)
       {
           get_connected_components(v[i],mp,visited,ans);

       }
       
   }
}
int main()
{
   int n;
   cin>>n;
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
   map<int,bool>visited;
   vector<int>ans;
   for(int i=0;i<n;i++)
   {
       visited[i]=false;
   }
  vector<vector<int>>finalans;
   for(int i=0;i<n;i++)
   {
       if(visited[i]==false)
       {
         
           get_connected_components(i,mp,visited,ans);
           finalans.push_back(ans);
       }
   
   }
   if(finalans.size()==1)
   cout<<"Yes\n";
   else
   cout<<"No\n";

}