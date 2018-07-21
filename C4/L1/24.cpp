#include<cstdio>

int main(void)
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    int ans = (n+1)%7+1;
    printf("%d\n",ans);
  }

  return 0;



}
