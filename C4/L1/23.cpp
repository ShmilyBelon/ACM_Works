#include<bits/stdc++.h>
const int maxn = 10000+10;
char s[maxn];

int cnt[4];

int main(void)
{
  while(scanf("%s",s)!=EOF)
  {
    memset(cnt,0,sizeof cnt);
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
      if(s[i]=='G'  ||  s[i]=='g')
        cnt[0]++;
      else if(s[i]== 'P' || s[i]== 'p')
        cnt[1]++;
      else if(s[i]== 'L' || s[i]== 'l')
        cnt[2]++;
      else if(s[i]== 'T' || s[i]== 't')
        cnt[3]++;
    }

    for(int i=0;  cnt[0]+ cnt[1]+cnt[2] + cnt[3]  ;i++)
    {
      if(cnt[0])
      {
        printf("G");
        cnt[0]--;
      }

      if(cnt[1])
      {
        printf("P");
        cnt[1]--;
      }

      if(cnt[2])
      {
         printf("L");
         cnt[2]--;
      }

      if(cnt[3])
      {
        printf("T");
        cnt[3]--;
      }


    }
    printf("\n");


  }

  return  0;


}
