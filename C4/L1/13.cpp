#include<bits/stdc++.h>



long long solve(long long n)
{
  long long ans=0,a=1;
  for(long long i=1;i<=n;i++)
  {
    ans += (a *= i);
  }
  return ans;

}

int main(void)
{
  long long n;
  while(scanf("%lld",&n)!=EOF)
  {
    printf("%lld\n",solve(n));

  }

  return 0;


}
