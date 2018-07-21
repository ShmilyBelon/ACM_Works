#include<bits/stdc++.h>
using namespace std;
const int maxn = 18+10;
typedef long long ll;
int s[maxn];
ll smax=0;

ll work(int l, int r)
{
  ll ans=1;
  for(int i=l;i<=r;i++)
      ans*=s[i];


  return ans;
}




int main(void)
{
   int n;
   int kase=0;
   while(scanf("%d",&n)!=EOF )
   {
  //   if(kase++)
    //     printf("\n");
     smax=0;
     for(int i=0;i<n;i++)
     {
        scanf("%d",&s[i]);
     }

    for(int i=0;i<n;i++)
       for(int j=i;j<n;j++)
       {
       
         smax = max(  work(i,j) , smax);
       } 

     printf("Case #%d: The maximum product is %lld.\n\n",++kase,smax);
   
   }
   return 0;



}
