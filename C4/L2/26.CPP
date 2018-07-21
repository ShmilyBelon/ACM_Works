#include<bits/stdc++.h>

const int maxn = 1000000 + 10;
using namespace std;

//int fa[maxn];
vector<int>son[maxn];
int depth[maxn];
//int deg[maxn];
//vector<int> leaf;
//int path[maxn];
int maxdepth=0;
vector<int>deepest;
//int root;

int dfs(int n)
{
  for(int i=0;i<son[n].size();i++)
  {
    depth[son[n][i]]=depth[n]+1;
    if( depth[son[n][i]] > maxdepth)
      maxdepth=depth[son[n][i]];
    dfs(son[n][i]);
  }
}


void work(int n)
{
  int rt;
  for(int i=1;i<=n;i++)
  {
    int f;
    scanf("%d",&f);
    if(f==-1)
    {
        f = 0;
      rt = i;
      //continue;
      //root=i;
    }

    //fa[i]=f;
    son[f].push_back(i);
   // deg[f]++;
  }
  //printf("asdf\n");
 // depth[root]=1;
//  depth[rt] = 1;
  dfs(0);
 // printf("898\n");

  for(int i=1;i<=n;i++)
  {
    if(depth[i]==maxdepth)
      deepest.push_back(i);

  }
  printf("%d\n",maxdepth);
  for(int i=0;i<deepest.size();i++)
  {
    if(!i)
      printf("%d",deepest[i]);
    else
      printf(" %d",deepest[i]);
  }
  printf("\n");
}
int main(void)
{
  int n;

  while(scanf("%d",&n)!=EOF)
    work(n);
  return 0;
}
