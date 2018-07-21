#include<bits/stdc++.h>

int main(void)
{
   int N;
   while(scanf("%d",&N)!=EOF)
   {
     getchar();
     while(N--)
     {
       char sex[2];double h;

       scanf("%1s",sex);
       scanf("%lf",&h);

       if(sex[0]=='M')
         printf("%.2f\n",h/1.09);
     else
       printf("%.2f\n",h*1.09);




     }




   }
  return 0;

}
