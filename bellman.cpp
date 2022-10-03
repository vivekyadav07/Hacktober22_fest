
#include<bits/stdc++.h>
using namespace std;

struct node { 
    int u;
    int v;
    int wt;

    node(int first,int second,int weight)
    {
         u =first;
         v =second;
         wt= weight;
    }

};

int main()
{
    int V,E;
    cin>>V>>E;

    vector<node>adj;

    for(int i =0;i<E;i++)
    {
        int u,v,wt;
        cin >> u >> v >> wt; 

        adj.push_back(node(u,v,wt));
    }

    int src;
    cin>>src;

    vector<int>dis(V,100000);

    dis[src]=0;

    for(int i =1;i<=V-1;i++)
    {
        for(auto it:adj)
        {
           if((dis[it.u]+it.wt)<dis[it.v]);
          
          { dis[it.v]=dis[it.u]+it.wt;
        }
        }
    }

 
        for(int i = 0;i<V;i++) {
            cout << i << " " << dis[i] << endl;
        }
    
return 0;
    
}