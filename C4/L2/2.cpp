#include<bits/stdc++.h>
using namespace std;
const int maxn = 100000 +10;
struct LINK{

  int data;
  int next;
};

LINK L1[maxn];
LINK L2[maxn];
LINK L[maxn];
unordered_map<int,bool>have;
vector<int>lk1;
vector<int>lk2;

int main(void)
{

  int addr,d,N,next,head,last;
  while(scanf("%d%d",&head,&N)!=EOF)
  {

     memset(L1,0,sizeof L1);
     memset(L2,0,sizeof L2);
     memset(L,0,sizeof L);
     have.clear();
     lk1.clear();
     lk2.clear();

     for(int i=0;i<N;i++)
     {
       scanf("%d %d %d",&addr,&d,&next);
       L[addr]={d,next};
     }
     int p=head;
     while(p>=0)
     {
       d=L[p].data;
       addr=p;
       next=L[p].next;
       if(!have.count(abs(d)))
       {
          int pri;
          have[abs(d)]=1;
          if(lk1.size())
          {
             pri=lk1.back();
             L1[pri].next=addr;
          }
        //  printf("L1 : %05d \n",addr);

          L1[addr]={d,next};
          lk1.push_back(addr);
       }
       else
       {
          int pri;
          if(lk2.size())
          {
             pri=lk2.back();
             L2[pri].next=addr;
          }
          L2[addr]={d,next};
          lk2.push_back(addr);
         // printf("L2 : %05d \n",addr);
       }

       p=L[p].next;

     }

     if(lk1.size())
       L1[lk1.back()].next=-1;
     if(lk2.size())
       L2[lk2.back()].next=-1;


      p=head;
     while(p>=0)
     {
       if(L1[p].next>-1)
         printf("%05d %d %05d\n",p,L1[p].data,L1[p].next);
       else
         printf("%05d %d -1\n",p,L1[p].data,L1[p].next);
       p=L1[p].next;
     }
     if(lk2.size())
     {
       p=lk2.front();
       while(p>=0)
       {
         if(L2[p].next>-1)
           printf("%05d %d %05d\n",p,L2[p].data,L2[p].next);
         else
           printf("%05d %d -1\n",p,L2[p].data,L2[p].next);
         p=L2[p].next;
       }

     }


  }

  return 0;


}




