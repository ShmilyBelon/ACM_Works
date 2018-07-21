#include<bits/stdc++.h>
using namespace std;
const int  maxn = 100+10;
vector<int>G[maxn];
vector<int>ans;
int indeg[maxn];
bool done[maxn];

void bfs(int s)
{
  queue<int>Q;
  Q.push(s);
 // done[s]=true;
  while(!Q.empty())
  {
    int u=Q.front();Q.pop();
    done[u]=true;
    int n=G[u].size();
    ans.push_back(u);
    for(int i=0;i<n;i++)
    {
      int v=G[u][i];
      indeg[v]--;
      if(indeg[v]==0 && done[v]==false )
        Q.push(v);
       // done[v]=true;


    }
  }

}


void toposort(int N)
{
  for(int i=1;i<=N;i++)
  {
     if(!done[i]  &&  !indeg[i])
       bfs(i);
  }

}


int main(void)
{
  int n,m;
  while(scanf("%d %d",&n,&m)!=EOF  && (n+m) )
  {
    memset(indeg,0,sizeof(indeg));
    memset(done,0,sizeof(done));
    ans.clear();

    for(int i=1;i<=n;i++)
      G[i].clear();

    for(int i=1;i<=m;i++)
    {
      int u,v;
      scanf("%d %d",&u,&v);
      indeg[v]++;
      G[u].push_back(v);
    }

    toposort(n);

    int len=ans.size();
    for(int i=0;i<len;i++)
    {
      if(i==len-1 )
       printf("%d",ans[i]);

      else
        printf("%d ",ans[i]);
    }

  printf("\n");



  }



return 0;


}
