#include<bits/stdc++.h>
using namespace std;
bool ispossible=false;

/*
0 -1
1- 2
2-3
0-3
3-4
4-5
5-6
4-6
*/
void printallpaths(int s,int d,map<int,vector<int>>mp,map<int,int>visited,string path)
{
   if(s==d)
   {
       cout<<path<<"\n";
       return;
   }
   vector<int>v=mp[s];//{ 0 -> 1,3};
   visited[s]=true;
   for(int i=0;i<v.size();i++)
   {
       if(visited[v[i]]==false)
       {
           string s=to_string(v[i]);
          printallpaths(v[i],d,mp,visited,path+s);
       }
       
   }
   visited[s]=false;
   
}
int main()
{
    int n;
    cin>>n;
    int e;
    cin>>e;
    map<int,int>visited;
    for(int i=0;i<n;i++)
    {
        visited[i]=false;
    }
    map<int,vector<int>>mp;
    while(e--)
    {
        int s,d;
        cin>>s>>d;
       // 0 -> 1 3 
       // 1 -> 0 2
       // 2 -> 1 3
       // 3 -> 2 0 4
       // 4 -> 3 5 6
       // 5 -> 4 6
       // 6 -> 5 4 

        mp[s].push_back(d);
        mp[d].push_back(s);

    }
    
    int src,dest;
    cin>>src>>dest;
    string ans="";
    printallpaths(src,dest,mp,visited,to_string(src));
    
    

}