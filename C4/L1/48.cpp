#include<bits/stdc++.h>

const int maxn = 1000+100;
int m1[maxn][maxn];
int m2[maxn][maxn];
int ans[maxn][maxn];

int main(void)
{
  int r1,c1,r2,c2;
  while(scanf("%d%d",&r1,&c1)!=EOF)
  {
     memset(ans,0,sizeof ans);
     for(int i=0;i<r1;i++)
     {
       for(int j=0;j<c1;j++)
       {
         scanf("%d",&m1[i][j]);
       }
     }

     scanf("%d%d",&r2,&c2);




     for(int i=0;i<r2;i++)
     {
       for(int j=0;j<c2;j++)
       {
         scanf("%d",&m2[i][j]);
       }
     }

     if(r2!=c1)
     {
      printf("Error: %d != %d\n",c1,r2);
      continue;
     }

/*8
     printf("\n\n");
   for(int i=0;i<r1;i++)
     {
       for(int j=0;j<c1;j++)
       {
         if(!j)
           printf("%d",m1[i][j]);
         else
           printf(" %d",m1[i][j]);
       }

       printf("\n");

     }

     printf("\n\n");
    for(int i=0;i<r2;i++)
     {
       for(int j=0;j<c2;j++)
       {
         if(!j)
           printf("%d",m2[i][j]);
         else
           printf(" %d",m2[i][j]);
       }

       printf("\n");

     }


     printf("\n\n");

*/



     for(int m=0;m<r1;m++)
      for( int n=0; n<c2;n++)
       for(int i=0,j=0;i<c1 && j<r2;i++,j++)
       {
         ans[m][n] += m1[m][i] * m2[j][n];
       }

     printf("%d %d\n",r1,c2);

     for(int i=0;i<r1;i++)
     {
       for(int j=0;j<c2;j++)
       {
         if(!j)
           printf("%d",ans[i][j]);
         else
           printf(" %d",ans[i][j]);
       }

       printf("\n");

     }


  }

  return 0;




}
