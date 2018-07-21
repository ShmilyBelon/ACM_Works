#include<cstdio>
#include<cmath>


int main(void)
{
  double col; char c[5];
  while(scanf("%lf%1s",&col,c)!=EOF)
  {
     int r=floor(0.5*col+0.5);
     int coli=(int)col;

     for(int j=0;j<r;j++)
     {
       for(int i=0;i<coli;i++)
       {
         printf("%c",c[0]);
       }
       printf("\n");
     }
  }
  return 0;

}
