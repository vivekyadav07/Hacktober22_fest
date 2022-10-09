#include<bits/stdc++.h>
using namespace std;

int V,E;
vector<int>adj[100];
bool visited[100];
stack<int>st;
void dfs(int src)
{
    visited[src]=true;

    for(auto it :adj[src])
    {
        if(!visited[it])
        dfs(it);
    }
  st.push(src);
  
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

        bfs(0);

        vector<int> topo;
	    while(!st.empty()) {
	        topo.push_back(st.top()); 
	        st.pop(); 
	    }
        for(int i=0;i<topo.size();i++)
        {
            cout<<topo[i]<<" ";
        }
    }
}