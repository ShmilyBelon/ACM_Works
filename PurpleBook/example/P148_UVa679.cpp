#include<bits/stdc++.h>

int D,I;
int main(void)
{
   int n;
   while(scanf("%d",&n) &&  (n!=-1) )
   {
      while(n--)
      {
        scanf("%d%d",&D,&I);
        int x=1;
        for(int i=0;i<D-1;i++)
        {
          if(I%2) { x=2*x;I=((I+1)/2); }
          else {x=x*2+1 ; I=I/2;   }
        }

        printf("%d\n",x);


      }
   }

   return 0;
}
























/*
const long long maxd = (1<<25) +1;
bool tree[maxd];
int D,I;
int ans;

int main(void)
{

  int n;
  while(scanf("%d",&n) && (n!=-1))
  {
    for(int i=0;i<n;i++)
    {
      scanf("%d%d",&D,&I);
      memset(tree,0,sizeof(tree));
      int maxn=(1<<D)-1;
      int x=1;
      for(int i=0;i<I;i++)
      {
        x=1;
        for(;;)
        {
           tree[x]=!tree[x];
           x=tree[x] ? (2*x) : (2*x+1);
           if(x>maxn)
             break;
        }
      }
      printf("%d\n",x/2);

    }

  }

  return 0;





}

*/

/*
void dfs(int x,int d);


int main(void)
{
  int kase=0;
  while(scanf("%d",&kase) && (kase!=-1))
    while(kase--)
    {
      scanf("%d%d",&D,&I);
      ans=0;
      memset(tree,0,sizeof(tree));
      for(int i=1;i<=I;i++)
      {
      //int d=1;
      dfs(1,1);
     // dfs(1,1);

      }

    printf("%d\n",ans);

    }

  return 0 ;
}
void dfs(int x,int d)
{

  if(d==D)
  {
    ans=x;
    tree[x]=!tree[x];
    return;
  }


  if(tree[x])
  {
    tree[x]=0;
    dfs(2*x+1,++d);
   // return ;
  }
  else
  {
    tree[x]=1;
    dfs(2*x,++d);
    //return ;
  }

}
*/
