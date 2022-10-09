#include<bits/stdc++.h>
using namespace std;

int V,E;
vector<int>adj[100];
bool visited[100];
bool bfs(int src)
{
   queue<int,int>q;
   q.push({src,-1});
   visited[src]=1;

   while(!q.empty())
   {
      int node =q.front().first;
      int prev =q.front().second;
      q.pop();
     // cout<<node<<" ";

      for(auto it :adj[node])
      {
        if(!visited[it])
        {
            visited[it]=1;
            q.push({it,node});
        }

        if(prev!=it)
        return true;
      }
   }
   return false;
}
int main()
{
    int t;
    cin>>t;

    for(int i =1;i<=t;i++)
    {
        
        cin>>V>>E;

        

        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        bool ans = bfs(0);
        cout<<ans;
    }
}