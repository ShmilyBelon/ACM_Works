#include<bits/stdc++.h>


int main(void)
{


  //freopen("in.txt","r+",stdin);
  //freopen("out.txt","w+",stdout);


   int jiu1,jiu2;
   while(scanf("%d%d",&jiu1,&jiu2)!=EOF)
   {
      int n; scanf("%d",&n);
      int cnt1=0,cnt2=0;
      for(int i=0;i<n;i++)
      {
        int a1,b1,a2,b2;
        scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
        if((a1+a2==b1)&&(b1!=b2))
          { jiu1--; cnt1++;}
        else if((a1+a2==b2)&&(b1!=b2))
          { jiu2--; cnt2++;}
        else
         continue;

        if(jiu1<0)
        {
          printf("A\n%d\n",cnt2);
          break;
        }
        else if(jiu2<0)
        {
          printf("B\n%d\n",cnt1);
          break;
        }
      }
   }

   return 0;




}
