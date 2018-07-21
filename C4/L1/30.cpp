#include<bits/stdc++.h>

using namespace std;

const int maxn = 50+10;
char s[maxn][8+10];
int sex[maxn];
bool done[maxn];
vector<int>ans;

int main(void)
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    memset(done,0,sizeof done);
    for(int i=0;i<n;i++)
    {
      scanf("%d",&sex[i]);
      scanf("%s",s[i]);
    }

    for(int i=0;i<n;i++)
    {
      if(done[i])
        continue;
      for(int j=n-1;j>=0;j--)
      {
        if(done[j])
          continue;
        if(sex[j]!=sex[i])
        {
          ans.push_back(j);
          done[i]=done[j]=1;
          break;
        }
      }
    }

    for(int i=0;i<ans.size();i++)
    {
      printf("%s %s\n",s[i],s[ans[i]]);

    }



  }

  return 0;


}
