#include<bits/stdc++.h>

using namespace std;

const int maxn = 100+10;
struct ANS
{
  long long x;
  long long y;
}a[maxn],ans;
long long  gcd(long long a , long long b);
long long lcm(long long a,long long b);
long long simplify(ANS& temp);

int main(void)
{

 // FILE* fp1 = freopen("in.txt","r+",stdin);
  //FILE* fp2 = freopen("out.txt","w+",stdout);

   long long n;
   while(scanf("%lld",&n)!=EOF)
   {
      ANS temp; long long z;
      for(int i=0;i<n;i++)
      {
        scanf("%lld",&a[i].x);
        getchar();
        scanf("%lld",&a[i].y);
        if(i)
        {
          temp.y=lcm(a[i].y,a[i-1].y);
          long long bei1=temp.y/a[i-1].y , bei2=temp.y/a[i].y;
          temp.x = bei1*a[i-1].x + bei2*a[i].x;
          a[i]=temp;
        }

      }

      if(temp.x==0)
      {
        printf("0\n");
        continue;
      }
      if(temp.x>0)
      {
         if((temp.x) % (temp.y) == 0)
         {
           printf("%lld\n",temp.x/temp.y);
           continue;
         }

         if(temp.x<temp.y)
         {
           simplify(temp);
           printf("%lld/%lld\n",temp.x,temp.y);
           continue;
         }

         else
         {
           z = simplify(temp);
           printf("%lld %lld/%lld\n",z,temp.x,temp.y);
         }

      }
      else
      {

         if((-temp.x) % (temp.y) == 0)
         {
           printf("%lld\n",temp.x/temp.y);
           continue;
         }

         if((-temp.x)<temp.y)
         {
           simplify(temp);
           printf("%lld/%lld\n",temp.x,temp.y);
           continue;
         }

         else
         {
           z = simplify(temp);
           printf("%lld %lld/%lld\n",z,temp.x,temp.y);
         }

      }


   }

   return 0;



}


long long  gcd(long long a , long long b)
{
  long long r,t;
  a=abs(a),b=abs(b);
  if(a<b)
    swap(a,b);


  while(b)
  {
    r=a%b;
    a=b;
    b=r;
  }

  return a;
}

long long lcm(long long a,long long b)
{
  a=abs(a);b=abs(b);
  return a*b/gcd(a,b);
}

long long simplify(ANS& temp)
{
   long long bei = gcd(temp.x,temp.y) , left , z;
   temp.x=temp.x/bei; temp.y=temp.y/bei;

   if(temp.x>0)
   {
    left=(temp.x)%(temp.y), z=(temp.x-left)/temp.y;
    temp.x=left;
     return z;
   }


   left=(-(temp.x))%(temp.y), z=(-temp.x-left)/temp.y;
   temp.x=-left;

    return -z;

}
