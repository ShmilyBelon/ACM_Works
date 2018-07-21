
#include<cstdio>
#include<cstring>
const int maxn = 50+10;

char s[maxn];


int main(void)
{
  while(scanf("%s",s)!=EOF)
  {
    int n=strlen(s);
    int cnt=0;
    double ou=1,fu=1;
    for(int i=0;i<n;i++)
    {
       if(s[i]=='2')
         cnt++;
    }
    if( ( (s[n-1]-'0')%2) == 0)
      ou=2.0;

    if(s[0]=='-')
    {
       n--; fu=1.5;
    }

    printf("%.2f%%\n",1.0*cnt/(1.0*n)*ou*fu*100);


  }



}
