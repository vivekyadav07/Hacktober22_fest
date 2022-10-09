#include<bits/stdc++.h>
using namespace std;
#define N 200001
#define ll long long int

ll max_inc_ab,max_amg_ab;

vector<int>adj[N];
ll ability[N];

int dfs(int node,ll ability_sum)
{
    int emp_c=0;

    for(int i=0;i<adj[node].size();i++)
    {
      emp_c =dfs(adj[u][i],ability_sum+ability[adj[u][i]]);

    }
    if(adj[node].size())
    {
        max_inc_ab= max(max_inc_ab,ability_sum);
        emp_c=1;
    }

    max_amg_ab= max(max_amg_ab,emp_c*ability[u]);
    return emp_c;
    
   
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<=t;i++)
    {
        int n,q;
        cin>>n>>q;

        max_inc_ab=0;
        max_amg_ab=0;

        for(int i=0;i<n;i++)
        {
            ability[i]=0;
        }

        for(int i=2;i<=n;i++)
        {
           cin>>u;
           adj[u].push_back(i);
        }

        for(int i=0;i<q;i++)
        {
            cin>>u>>temp;
            ability[u]+=temp;
        }

        dfs(1,ability[1]);

        cout<<"#"<<i<<" "<<max_inc_ab<<" "<<max_amg_ab<<endl;


    }
    return 0;
}