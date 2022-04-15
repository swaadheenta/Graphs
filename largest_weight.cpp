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
int largest=INT_MIN;
string finalans;
void largestpath(int s,int d,map<int,vector<int>>mp,map<int,int>visited,string path,int weight,map<string,int>my_map)
{
   if(s==d)
   {
       
       cout<<path<<" "<<weight<<"\n";
       if(weight>largest)
       {
            finalans=path;
            largest=weight;
       }
       return;
   }
   vector<int>v=mp[s];//{ 0 -> 1,3};
   visited[s]=true;
   for(int i=0;i<v.size();i++)
   {
       if(visited[v[i]]==false)
       {
           string str=to_string(v[i]);
           string s1=to_string(s)+str;
          
        largestpath(v[i],d,mp,visited,path+str,weight+my_map[s1],my_map);
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
    map<string,int>my_map;
    while(e--)
    {
        int s,d,val;
        cin>>s>>d>>val;
        my_map[to_string(s)+to_string(d)]=val;
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
    largestpath(src,dest,mp,visited,to_string(src),0,my_map);
    cout<<finalans;
    
    

}