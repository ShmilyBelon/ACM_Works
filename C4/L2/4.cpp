#include<bits/stdc++.h>
#include<cstdlib>
const int maxn = 1000+10;
int a[maxn];
int ok=1;
//int tree[100*maxn+10];
int cnt=1;


struct tree
{
  int data;
  tree *left;
  tree *right;
};



void dfs1(int lb,int rb,tree* &x)
{
   if(lb==rb)
   {
    x=(tree*)malloc(sizeof(tree));
    x->data=a[lb];
    x->left=NULL;
    x->right=NULL;
     return ;
   }
   else if(lb>rb)
       return;



    x=(tree*)malloc(sizeof(tree));
    x->data=a[lb];
    x->left=NULL;
    x->right=NULL;

   int nlb=lb,nrb=rb;
   int i;
   for( i=lb+1;i<=rb;i++)
   {
     if(a[lb]<=a[i])
     {
       nlb=i; nrb=rb;
       break;
     }
   }


   int jud=-1;
   for(int i=nlb;i<=nrb;i++)
   {
     if(a[lb]>a[i])
     {
       jud=i;
       break;
     }
   }
   if(jud!=-1)
   {
     ok=0; return ;
   }

   dfs1(lb+1,nlb-1,x->left);
   dfs1(nlb,nrb,x->right);
}

void dfs2(int lb,int rb,tree* &x)
{
   if(lb==rb)
   {
    x=(tree*)malloc(sizeof(tree));
    x->data=a[lb];
    x->left=NULL;
    x->right=NULL;
    return ;
   }
   else if(lb>rb)
     return ;


    x=(tree*)malloc(sizeof(tree));
    x->data=a[lb];
    x->left=NULL;
    x->right=NULL;


   int nlb=lb,nrb=rb;

   for(int i=lb+1;i<=rb;i++)
   {
     if(a[lb]>a[i])
     {
       nlb=i; nrb=rb;
       break;
     }
   }

   int jud=-1;
   for(int i=nlb;i<=nrb;i++)
   {
     if(a[lb]<=a[i])
     {
       jud=i;
       break;
     }
   }
   if(jud!=-1)
   {
     ok=0; return ;
   }

   dfs2(lb+1,nlb-1,x->left);
   dfs2(nlb,nrb,x->right);
}

void show(tree* &rt,int n)
{

  if(rt==NULL)
    return ;

  show(rt->left,n);
  show(rt->right,n);

  if(cnt==n)
    printf("%d\n",rt->data);
  else printf("%d ",rt->data);
  cnt++;
  free(rt);

}



 int main(void)
 {
    int n;
    while(scanf("%d",&n)!=EOF)
    {
      ok=1;
      memset(a,0,sizeof a);

      for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);


      tree* root=NULL;

      dfs1(1,n,root);
      if(!ok)
      {
        ok=1;dfs2(1,n,root);
      }

      if(ok)
      {
        printf("YES\n");
        cnt=1;
        show(root,n);

      }

      else printf("NO\n");

    }

 }

