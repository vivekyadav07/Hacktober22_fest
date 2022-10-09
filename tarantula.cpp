#include<bits/stdc++.h>
using namespace std;

double graph[301][301];
double prob[301][301];
bool visited[301][301];

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
int main()
{
    int t;
    cin>>t;

    for(int tc =1;tc<=t;tc++)
    {
        int n,m;
        cin>>n>>m;

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                visited[i][j]=0;
                prob[i][j]=0;

                cin>>graph[i][j];
                graph[i][j]=0.9999+graph[i][j]*0.000001;
            }
        }
          prob[1][1]=graph[1][1];
          priority_queue<pair<double,pair<int ,int>>>pq;

          pq.push({graph[1][1],{1,1}});
          while(!pq.empty())
          {
            int i = pq.top().second.first,j = pq.top().second.second;
            double d = pq.top().first;
           
         
            visited[i][j]=1;
            pq.pop();
            

         
            for (int k=0;k<4;k++){
                
               
                int ni = i + dx[k];
                int nj = j + dy[k];
    
                if (!visited[ni][nj] and ni>0 and nj > 0 and ni <= n and nj <= m  )
                {
                    if(prob[ni][nj]<graph[ni][nj]*d)
                    {
                       prob[ni][nj]=graph[ni][nj]*d;
                       pq.push({prob[ni][nj],{ni,nj}});
                    }
                }
            }
          }

          cout<<fixed<<setprecision(6)<<"#"<<tc<<" "<<prob[n][m]<<endl;
                
    }
}