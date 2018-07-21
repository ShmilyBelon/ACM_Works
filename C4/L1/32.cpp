#include<bits/stdc++.h>

using namespace std;

const int maxn = 100000+100;
char s[maxn];



int main(void)
{
  int n; char c[2];
  while(scanf("%d%",&n)!=EOF)
  {
     getchar();c[0]=getchar();
     getchar();
     fgets(s,maxn,stdin);
       int len= strlen(s)-1;
     if(n<=len)
       printf("%s",s+len-n);
     else
     {
       for(int i=0;i<n-len;i++)
       {
         printf("%c",c[0]);
       }
       printf("%s",s);

     }

  }

  return 0;



}
