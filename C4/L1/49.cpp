#include<bits/stdc++.h>
using namespace std;
const int maxn = 100 + 10;
int sch[maxn];
vector<int>v[maxn];
bool ok[maxn];

int main(void)
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {

     for(int i=0;i<n;i++)
     {
       scanf("%d",&sch[i]);
       v[i].clear();
       ok[i]=0;
       //printf("sch  %d \n",sch[i]);
     }

    int no=0; int done=0,last=-1;
    int donen=0;
    for(int i=0;;i= (i+1)%n )
    {
       if(v[i].size()==sch[i]*10)
       {
         if(!ok[i])
         {
           ok[i]=1; donen++;
         }
         if(donen==n)
            break;
         else
           continue;
       }



       if( v[i].size() == 0)
       {
           v[i].push_back(++no);
          // printf("no:  %d\ni  %d\n",no, i);
       }
       else if(no!= v[i].back())
       {
          v[i].push_back(++no);
           //printf("no:  %d\ni  %d\n",no,i);
       }
       else
        {
          done=1;last=i;break;
        }
    }
    if(done)
    {
      for(;;)
      {
        if(v[last].size()==sch[last]*10)
         break;

        v[last].push_back(no+=2);
      }
    }

    for(int i=0;i<n;i++)
    {
       printf("#%d\n",i+1);
       for(int j=0;j<sch[i];j++)
       {
          for(int k=0;k<10;k++)
          {
            if(k<9)
              printf("%d ",v[i][j*10+k]);
            else
              printf("%d\n",v[i][j*10+k]);
          }

       }

    }



  }

  return 0;



}
