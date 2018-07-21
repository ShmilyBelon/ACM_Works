#include<bits/stdc++.h>


using namespace std;
const int maxn = 500  +10;
struct Edge
{
  int from , to , dist;
  Edge ( int u,int v, int d) : from(u) , to(v) , dist(d) {}
};
struct HeapNode
{
  int d,u;
  bool  operator < (const HeapNode& rhs) const{
    return d>rhs.d;
  }

  HeapNode(int td, int tu):d(td),u(tu) {}
};
vector<Edge>edges;
vector<int>G[maxn];
stack<int>path;
bool done[maxn];
int d[maxn];
int p[maxn];
int w[maxn];
int pnum[maxn];
int sum[maxn];

void AddEdge(int from,int to,int dist)
{
  edges.push_back(Edge(from,to,dist));
  int m = edges.size();
  G[from].push_back(m-1);
}

void dijkstra(int s,int N)
{
  priority_queue<HeapNode>Q;
  for(int i=0;i<N;i++) d[i]=INT_MAX;
  d[s]=0;
  sum[s]=w[s];
  pnum[s]=1;
  memset(done,0,sizeof done);
  Q.push(HeapNode(0,s));
  while(!Q.empty())
  {
    HeapNode x = Q.top(); Q.pop();
    int u=x.u;

    if(done[u])
    {
     // Edge e = edges[p[u]];
     // pnum[u]+=pnum[e.from];
      continue;
    }

    done[u]=true;

    for(int i=0;i<G[u].size();i++)
    {
      Edge& e = edges[G[u][i]];
      if(d[e.to] >d[u] + e.dist)
      {
         d[e.to]=d[u] + e.dist;
         p[e.to]= G[u][i];
         pnum[e.to] = pnum[u];
         sum[e.to] = w[e.to]+sum[u] ;

         Q.push(HeapNode(d[e.to],e.to));
      }
      else if(d[e.to] ==d[u] + e.dist)
      {
         d[e.to]=d[u] + e.dist;

         pnum[e.to] += pnum[u];

         if(sum[e.to]<w[e.to]+sum[u])
         {
            sum[e.to] = w[e.to]+sum[u] ;
            p[e.to]= G[u][i];
         }

         Q.push(HeapNode(d[e.to],e.to));

      }
    }
  }

}

int main(void)
{

  int N,M,S,D;
  while(scanf("%d%d%d%d",&N,&M,&S,&D)!=EOF)
  {
    memset(p,0,sizeof p);
    memset(pnum,0,sizeof pnum);
    memset(sum,0,sizeof sum);
    edges.clear();
    for(int i=0;i<N;i++) G[i].clear();


    for(int i=0;i<N;i++)
      scanf("%d",&w[i]);

    for(int i=0;i<M;i++)
    {
      int f,t,d;
      scanf("%d%d%d",&f,&t,&d);
      AddEdge(f,t,d);
      AddEdge(t,f,d);
    }
    //printf("123123123\n");

    dijkstra(S,N);
    //printf("456456456\n");
    int temp=D;
    path.push(temp);
    while(temp!=S)
    {
      temp=edges[p[temp]].from;
      path.push(temp);
    }

    //printf("789789789\n");

    printf("%d %d\n",pnum[D],sum[D]);
    while(!path.empty())
    {
      if(path.size()>1)
        printf("%d ",path.top());
      else
        printf("%d\n",path.top());

      path.pop();
    }

  }

  return 0;


}
