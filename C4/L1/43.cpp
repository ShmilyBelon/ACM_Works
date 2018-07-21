#include<bits/stdc++.h>

using namespace std;
const int maxn = 1000+10;

struct RECORD
{
  int hh;
  int mm;
  RECORD(int h,int m): hh(h),mm(m) {};
};
stack<RECORD> book[maxn];

int main(void)
{
  int day;
  while(scanf("%d",&day)!=EOF)
  {
    while(day--)
    {
      int times=0;
      double sumt=0;
      for(;;)
      {
        int id,hh,mm;
        char op;


        scanf("%d %c %d:%d",&id,&op,&hh,&mm);
       // printf("%c\n",op);

        if(id)
        {
          if(op=='S'  &&  (book[id].empty()) )
             book[id].push(RECORD(hh,mm));

          else if(op=='S'  &&  !(book[id].empty()))
          {
             book[id].pop();
             book[id].push(RECORD(hh,mm));


          }
          else if(  (op=='E') && ( !book[id].empty() ) )
          {
            times++;
            if(book[id].top().mm>mm)
            {
              sumt += mm-book[id].top().mm + 60 + 60*(hh-book[id].top().hh-1);
            }
            else
            {
              sumt += mm-book[id].top().mm  + 60*(hh-book[id].top().hh);
            }
            //printf("times: %d  sumt: %.0f\n",times,sumt);

            book[id].pop();

          }
          else
            ;

        }
        else
        {
          if(times)
            printf("%d %.0f\n",times,sumt/(1.0*times));
          else
            printf("0 0\n");

          for(int i=0;i<=1000;i++)
          {
            if( !(book[id].empty()) )
              book[id].pop();
          }

          break;

        }

      }


    }

  }

  return 0;




}
