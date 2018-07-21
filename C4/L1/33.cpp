#include<bits/stdc++.h>

using namespace std;
set<int>Set;
char s[10];

int cnt(char s[])
{
  Set.clear();
  for(int i=0;i<4;i++)
  {
    Set.insert(s[i]-'0');
  }
  return Set.size();

}

int main(void)
{
  int y,d;
  while(scanf("%d%d",&y,&d)!=EOF)
  {
    int x=0;

    for(;;)
    {

      sprintf(s,"%04d",y+x);
      if(d == cnt(s))
      {
        break;
      }
      else
      {
        x++;
      }

    }

    printf("%d %s\n",x,s);






  }

  return 0;



}
