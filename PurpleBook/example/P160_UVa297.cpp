#include<bits/stdc++.h>

using namespace std;
const int maxn=10240+10;

struct TREE
{
   char d;
   int sum;
   TREE *son1,*son2,*son3,*son4;
   TREE() : son1(NULL),son2(NULL),son3(NULL),son4(NULL) {}
}tree[maxn];
//int i=0;
int cnt=0;
char s1[maxn];
char s2[maxn];
//char s[maxn];


int build(TREE* &rt ,char* &s1,char* &s2,int w)
{
   char c1,c2;
   c1=s1[0];
   c2=s2[0];

 //  printf("c1: %c  c2: %c \n",c1,c2);


   if(c1=='p' && c2=='p')
   {
     rt=&tree[++cnt];
     rt->d=c1;
   //  printf("11111\n");
     return rt->sum=(build(rt->son1,++s1,++s2,w/4)+build(rt->son2,++s1,++s2,w/4)+build(rt->son3,++s1,++s2,w/4)+build(rt->son4,++s1,++s2,w/4));
   }
   else if(c1=='p' && c2=='f' )
   {
     rt=&tree[++cnt];
     rt->d=c2;
     rt->sum=w;
     rt->son1=rt->son2=rt->son3=rt->son4=NULL;
     s1+=4;
    // printf("22222\n");
     return w;
   }
   else if(c1=='p' && c2=='e')
   {
     rt=&tree[++cnt];
     rt->d=c1;
   //  printf("333333\n");
     return rt->sum=(build(rt->son1,++s1,s2,w/4)+build(rt->son2,++s1,s2,w/4)+build(rt->son3,++s1,s2,w/4)+build(rt->son4,++s1,s2,w/4));
   }
   else if(c1=='f' &&  c2!='p' )
   {
     rt=&tree[++cnt];
     rt->d=c1;
   //  printf("44444\n");
     rt->son1=rt->son2=rt->son3=rt->son4=NULL;
     return rt->sum=w;
   }
   else if(c1=='f' &&  c2=='p' )
   {
     rt=&tree[++cnt];
     rt->d=c1;
   //  printf("000000\n");
     s2+=4;
     rt->son1=rt->son2=rt->son3=rt->son4=NULL;
     return rt->sum=w;

   }


   else if(c1=='e' && c2=='f')
   {
     rt=&tree[++cnt];
     rt->d=c2;
   //  printf("55555\n");
     rt->son1=rt->son2=rt->son3=rt->son4=NULL;
     return rt->sum=w;
   }
   else if(c1=='e' && c2=='p')
   {
     rt=&tree[++cnt];
     rt->d=c2;
    // printf("66666\n");
     return rt->sum=(build(rt->son1,s1,++s2,w/4)+build(rt->son2,s1,++s2,w/4)+build(rt->son3,s1,++s2,w/4)+build(rt->son4,s1,++s2,w/4));
   }
   else if(c1=='e' && c2=='e')
   {
     rt=&tree[++cnt];
     rt->d=c1;
    // printf("77777\n");
     rt->son1=rt->son2=rt->son3=rt->son4=NULL;
     return  rt->sum=0;
   }
   else
     return 0;

}




int main(void)
{

  int T;
  scanf("%d",&T);
  getchar();
  while(T--)
  {
   // memset()
   // printf("T :%d\n",T);
    TREE* root=NULL;
    fgets(s1,maxn-1,stdin);
    fgets(s2,maxn-1,stdin);

    char *p1=s1,*p2=s2;

  //  printf("s1:  %s",s1);
    //printf("s2:  %s",s2);
     cnt=0;
    int ans=build(root,p1,p2,1024);
    printf("There are %d black pixels.\n",ans);

  }

  return 0;


}
