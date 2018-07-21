#include<bits/stdc++.h>

const int maxn = 1000+100;
int cnt[maxn];

int main(void)
{
  int N;
  while(scanf("%d",&N)!=EOF)
  {
    for(int i=0;i<N;i++)
    {
      int K,F;
      scanf("%d",&K);
      for(int j=0;j<K;j++)
      {
        scanf("%d",&F);
        cnt[F]++;
      }
    }
    int maxf=0,f=-1;
    for(int i=0;i<=1000;i++)
    {
      if(cnt[i]>=maxf)
      {
        maxf=cnt[i]; f=i;
      }

    }
    printf("%d %d\n",f,maxf);


  }

  return 0;




}



