#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e4+10;
vector<int>G[maxn];

struct Edge{

   int f,t;
   Edge(int a,int b):f(a),t(b) {}
};
vector<Edge>edges;

stack<Edge>ans;
bool done[maxn*maxn];
int indeg[maxn],outdeg[maxn];
void AddEdge(int u,int v)
{
  edges.push_back(Edge(u,v));
  int m=edges.size();
  G[u].push_back(m-1);
}


void euler(int s)
{
  for(int i=0;i<G[s].size();i++)
  {
    Edge& e = edges[G[s][i]];
   
    if(!done[G[s][i]])
    { 
      done[G[s][i]]=true;  
      euler(e.t);  
      ans.push(e); 
    }
   
  }

}


void print()
{
  while(!ans.empty())
  {
    Edge e=ans.top(); ans.pop();
    printf("%d->%d\n",e.f,e.t);
  }

}


int main(void)
{
  // printf("Heloo WOrld!\n");
  int n, m;
  int u,v;
  while(scanf("%d %d",&n,&m)!=EOF)
  {
    memset(done,0,sizeof(done));
    edges.clear();   
    memset(indeg,0,sizeof(indeg));
    memset(outdeg,0,sizeof(outdeg));
     

    for(int i=0;i<=n;i++) G[i].clear();

    for(int i=0;i<m;i++)
    {
      scanf("%d %d",&u,&v);
      outdeg[u]++;
      indeg[v]++;
      AddEdge(u,v);
    }

    int s=-1,t;
    for(int i=1;i<=n;i++)
    {
     // printf("NO.%d  in  %d out %d\n",i, indeg[i],outdeg[i] );
        
      if(indeg[i]==(outdeg[i]+1))
      {
      
           t=i;
      }    
       if(indeg[i]==(outdeg[i]-1))
      {
           s=i;
      }   
    }

  //  printf("s: %d\n",s);

    if(s==-1)
    {
     printf("Not exist!\n");
     break;
    }

    euler(s);
    print();
  }

  return 0;
  

}
