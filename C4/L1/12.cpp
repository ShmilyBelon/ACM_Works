
#include<bits/stdc++.h>

using namespace std;
//const int maxn = 10000 + 10;


int main(void)
{

   //FILE* fp1 = freopen("in.txt","r+",stdin);
   //FILE* fp2 = freopen("out.txt","w+",stdout);

   int n;

  while(scanf("%d",&n)!=EOF)
  {
     int a=2,ans=1;
     for(unsigned int i=(unsigned int )n;i!=0;i>>=1)
     {

        if(i&1)
        {
           ans *= a;
           a *= a;
          // printf("i =  %d\n",i);
        }

        else
         a *= a;
     }

     printf("2^%d = %d\n",n,ans);


  }

  return 0;

}




