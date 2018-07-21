#include<bits/stdc++.h>

typedef long long ll;

const int maxn = 1e6+10;
ll  phi[maxn];


void phi_table(ll n, ll phi[])
{
   for(int i=1;i<=n;i++) phi[i]=0;
   phi[1]=1;
   for(int i=2;i<=n;i++) if(!phi[i])
       for(int j=i ; j<=n ; j+=i)
        { 
            if(!phi[j]) phi[j]=j;
            phi[j] = phi[j] / i * (i-1);  
            printf("phi[%d]: %lld \n",j,phi[j]);

        }


}



int main(void)
{

   ll n=100;
   phi_table(n , phi);
   for(int i=1;i<=n;i++)
   {
     // printf("phi[%d]: %lld \n",i,phi[i]);
   
   }

   return 0;



}
