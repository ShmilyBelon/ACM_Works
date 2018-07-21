#include<bits/stdc++.h>

const int maxn = 10000+10;

using namespace std;

char temp[maxn];
int post_order[maxn] , in_order[maxn] , lson[maxn], rson[maxn];
int ind[maxn];
int best,best_sum;


int read(int* a,bool jud)
{
  string line;
  if(!getline(cin,line))  return 0;
  stringstream ss(line);
  int n=0,x;
  while(ss>>x)
  {
    a[n]=x;
    if(jud)
      ind[x]=n;
    n++;
  }
  return n;
}

int build(int L1,int R1,int L2, int R2 )
{
  if(L1>R1)  return 0;
  int root=post_order[R2];
  int p=ind[root];
//  printf("p : %d\nroot :%d",p,root);

  int cnt=p-L1;
  lson[root]=build(L1,p-1,L2,L2+cnt-1);
  rson[root]=build(p+1,R1,L2+cnt,R2-1);
  return root;
}

void dfs(int u,int sum)
{
  sum += u;
  if(!lson[u] &&  !rson[u])
  {
    if(sum<best_sum || (sum==best_sum  &&  u<best))
    { best=u ; best_sum=sum ;}
  }

  if(lson[u]) dfs(lson[u],sum);
  if(rson[u]) dfs(rson[u],sum);

}


int main(void)
{
  while(1)
  {
    memset(lson,0,sizeof(lson));
    memset(rson,0,sizeof(rson));
    memset(ind,0,sizeof(ind));
    best=best_sum=INT_MAX;
    int n=read(in_order,1);
    if(n<=0)
      break;



    read(post_order,0);
    //printf("n:  %d\n",n) ;


    build(0,n-1,0,n-1);

    dfs(post_order[n-1],0);
    printf("%d\n",best);
  }

  return 0;


}
