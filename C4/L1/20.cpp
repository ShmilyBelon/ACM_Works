#include<bits/stdc++.h>

using namespace std;

const int maxn1 = 100+10;
const int maxn2 = 99999+10;
set<int>Set[maxn1];
vector<int>ans;
bool printed[maxn2];

int main(void)
{

   freopen("in.txt","r+",stdin);
   freopen("out.txt","w+",stdout);


  int N;
  while(scanf("%d",&N)!=EOF && N)
  {
    ans.clear(); memset(printed,0,sizeof printed);
    for(int i=0;i<maxn1;i++)
       Set[i].clear();
    for(int j=0;j<N;j++)
    {
      int K; scanf("%d",&K);
      for(int i=0;i<K;i++)
      {
        int ID ; scanf("%d",&ID);
        Set[j].insert(ID);
      }
    }
    int M; scanf("%d",&M);

    for(int i=0;i<M;i++)
    {
      int tofind; scanf("%d",&tofind);
      int done=0;
      for(int j=0;j<N;j++)
      {
        if( ( Set[j].count(tofind)==1 )&& (Set[j].size()>1) )
          { done=1; break;}
      }
      if(!done)
        ans.push_back(tofind);
    }

    if(ans.size())
    {
      for(int i=0;i<ans.size();i++)
      {
         if(printed[ans[i]])
         {
           continue;
         }


         if(i==0)
           { printf("%05d",ans[i]) ;printed[ans[i]]=true; }
         else
          {  printf(" %05d",ans[i]), printed[ans[i]]=true; }
      }
      printf("\n");

    }

    else
    printf("No one is handsome\n");

  }

  return 0;

}

