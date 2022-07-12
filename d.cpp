#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,x;
    cin>>s>>x;
    for(int i=0;i<s.length();i++)
    {
          if(s[i]==x[0])
          {
              string str=s.substr(i,x.length());
              if(str==x)
              {
                  cout<<i;
              }
              else 
              {
                  int len=i+x.length(),j=0;
                  int cnt=0;
                  for(int k=i;k<len;k++)
                  {
                      if(s[k]!=x[j])
                      cnt++;
                  }
                  
              }
          }
    }
}