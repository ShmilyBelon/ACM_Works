
#include<bits/stdc++.h>

using namespace std;
int main(void)
{
  //FILE* fp1 = freopen("in.txt","r+",stdin);
  //FILE* fp2 = freopen("out.txt","w+",stdout);

  long long a[5];
  while(scanf("%lld%lld%lld",&a[0],&a[1],&a[2])!=EOF)
  {
    sort(a,a+3);
    for(int i=0;i<3;i++)
    {
      if(i<2)
        printf("%lld->",a[i]);
      else
        printf("%lld\n",a[2]);
    }
  }



  return 0;

}
