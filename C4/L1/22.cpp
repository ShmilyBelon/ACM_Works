#include<cstdio>

int main(void)
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
      int d; scanf("%d",&d);
      if(d==0)
        cnt2++;
      else if(d&1)
        cnt1++;
      else cnt2++;
    }
    printf("%d %d\n",cnt1,cnt2);

  }



}
