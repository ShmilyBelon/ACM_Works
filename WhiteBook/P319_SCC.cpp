#include<bits/stdc++.h>

using namespace std;
const int maxn =1e4+10;
stack<int>S;
vector<int>G[maxn];


int order[maxn],dfs_clock,sccno[maxn],sccid,lowlink[maxn];

void dfs(int u)
{
  order[u]=lowlink[u]=++dfs_clock;
  S.push(u);
  for(int i=0;i<G[u].size();i++)
  {
    int v=G[u][i];
    if(!order[v])
    {
      dfs(v);
      lowlink[u]=min(lowlink[u],lowlink[v]);
    }
    else if(!sccno[v])
    {
      lowlink[u]=min(lowlink[u],order[v]);
    }
  }

  if(lowlink[u]==order[u])
  {
    ++sccid;
    for(;;)
    {
      int x=S.top();S.pop();
      sccno[x]=sccid;
      if(x==u)
        break;
    }
  }

}

int main()
{
return 0;
}
