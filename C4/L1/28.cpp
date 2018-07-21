
#include<bits/stdc++.h>


bool is_prime(long long n)
{
  if(n==1)
    return false;
  if(n==2)
     return true;
  for(long long i=2;i<sqrt(n);i++)
  {
     if(n%i==0)
      return false;
  }

  return true;


}


int main(void)
{


  //freopen("in.txt","r+",stdin);
  //freopen("out.txt","w+",stdout);
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    for(int i=0;i<n;i++)
    {
      int n;scanf("%d",&n);
      is_prime(n) ? printf("Yes\n") : printf("No\n") ;
    }
  }

  return 0;

}
