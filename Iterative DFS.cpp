// Iterative Version of DFS(Undirected Graph)
// Considering that nodes start from 0 to N, making 0 as root node

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;
    vector<int> gra[N];
    int x,y;
    for(int i=0;i<M;++i)
    {
        cin>>x>>y;
        gra[x].push_back(y);
        gra[y].push_back(x);
    }
    stack<int> s1;
    vector<bool> visit(N);
    s1.push(0);
    visit[0]=true;
    while(!s1.empty())
    {
        int tar=s1.top();
        cout<<tar<<" ";
        s1.pop();
        for(int i=0;i<gra[tar].size();++i)
        {
            if(visit[gra[tar][i]]==false)
            {
                visit[gra[tar][i]]=true;
                s1.push(gra[tar][i]);
            }
        }
    }
    return 0;
}
