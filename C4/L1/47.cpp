#include<bits/stdc++.h>

const int maxn =1000+10;
char s[maxn];

int main(void)
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    for(int i=0;i<n;i++)
    {
      int hu,mai;
      scanf("%s%d%d",s,&hu,&mai);
      if(hu<15 || hu >20)
        printf("%s\n",s);
      else if(mai<50 || mai>70)
        printf("%s\n",s);
    }

  }


  return 0;
}
