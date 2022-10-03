
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   for(int tc=1;tc<=t;tc++)
    {
        int zone;
        cin>>zone;
        vector<int> area[zone];
        for(int i=0;i<zone;i++)
        {
            int treasure;
            cin>>treasure;
            for(int j=0;j<treasure;j++)
            {
                int val;
                cin>>val;
                area[i].push_back(val);
            }
        }
        int total=0;
        priority_queue<int> pq;
        for(int i=zone-1;i>=0;i--)
        {
            for(int j=0;j<area[i].size();j++)
            {
                pq.push(area[i][j]);
            }
        int cur = pq.top();
        pq.pop();
        total += cur;
        }
        cout<<"#"<<tc<<" "<<total<<endl;
    }
    return 0;
}




1  2  3  4  5  6   7  8  9   10  11  12  13  14  15  16
92 47 40 5 51 16  18  32  8  67  49  30  29  26  80  26 
11 1  8  5 0  3   7   10  13  9  2   16  15  14  6   12

11 ,2, 1,






6
7
0 1 2
0 4 1
1 2 3
4 2 2
4 5 4
2 3 6
5 3 1
0


