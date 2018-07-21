#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn =1e6+10;
struct E{

 ll x , y;
 E(ll xx, ll yy ): x(xx),y(yy){} 

};


vector<E>ans;



int main(void)
{

   ll k;
   while(scanf("%lld",&k)!=EOF)
   {

      ans.clear(); 
      ll y=k+1;
      for(;y<=2*k;y++)
      {
        if((k*y)%(y-k) == 0 )
        {
          ll  x =(k*y)/(y-k);
          if(x<y)
            break;
         
          else
          {
            ans.push_back(E(x,y));
          }
        
        }
      
      }

      printf("%lu\n",ans.size());
      for(int i=0;i<ans.size();i++)
        printf("1/%lld = 1/%lld + 1/%lld\n",k,ans[i].x,ans[i].y);
      
   }


   return 0; 

}
