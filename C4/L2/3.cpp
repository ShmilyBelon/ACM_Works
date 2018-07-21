
#include<bits/stdc++.h>
using namespace std;

const int maxn  = 1000 + 10;
struct GOODS
{
  double s;
  double tot;
  double a;

  bool operator < (const GOODS& rhs) const{
   return a>rhs.a;

  }

} goods[maxn];



int main(void)
{
   long long  N;
   double D;
   scanf("%lld %lf",&N,&D);
   {

     memset(goods,0,sizeof goods);
     for(int i=0;i<N;i++)
       scanf("%lf", &goods[i].s);
     for(int i=0;i<N;i++)
     {
       scanf("%lf",&goods[i].tot);
       goods[i].a=1.0*goods[i].tot/(1.0*goods[i].s);
     }
     sort(goods,goods+N);

     double sum=0;
     for(int i=0;i<N && D;i++)
     {
       if(goods[i].s<D)
       {
         D -= goods[i].s;
         sum += goods[i].tot;
         //printf("1sum : %f\n",sum);
       }
       else
       {

         sum += goods[i].a * D;
       //  printf("sa: %f \n",goods[i].a * (double)D);
         break;
         D=0;
      //   printf("2sum : %f\n",sum);

       }
     }

     printf("%.2f\n",sum);

   }

   return 0;


}
