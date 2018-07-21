#include<bits/stdc++.h>

int ok=1;

struct TREE
{

  int wl,dl,wr,dr;
  int sum;
  TREE* left;
  TREE* right;
  TREE(): left(NULL),right(NULL) {}
};

void build(TREE* &tl)
{

  tl= new TREE;
  scanf("%d %d %d %d",&tl->wl,&tl->dl,&tl->wr,&tl->dr);
  if(tl->wl==0  &&  tl->wr!=0)
  {
    build(tl->left);
    tl->sum=tl->left->sum + tl->wr;
    if( (tl->left->sum)*(tl->dl) != (tl->wr)*(tl->dr) )
      ok=0;

    return;
  }
  else if(tl->wr==0  &&  tl->wl!=0)
  {
    build(tl->right);
    tl->sum=tl->wl + tl->right->sum;
    if( (tl->wl)*(tl->dl) != (tl->right->sum)*(tl->dr) )
      ok=0;

    return ;
  }


  else if((tl->wl==0)&&  (tl->wr==0))
  {
    build(tl->left);
    build(tl->right);

    tl->sum=tl->left->sum + tl->right->sum;
    if( (tl->left->sum)*(tl->dl) != (tl->right->sum)*(tl->dr) )
      ok=0;
    return ;

  }

  else
  {
    tl->sum=  tl->wl   +   tl->wr;
    if( ((tl->wl)*(tl->dl))!=((tl->wr * tl->dr) ))
    {
        ok=0;
    }

    return;
  }

}

void destroy(TREE* &rt)
{
  if(rt==NULL)
    return ;
  destroy(rt->left);
  destroy(rt->right);

  delete rt;
}


int main(void)
{
  int T;
  scanf("%d",&T);
  while(T--)
  {
    ok=1;
    TREE* root=NULL;
    build(root);

    //printf("sum  :   %d\n",root->sum);

    if(ok)
      printf("YES\n");
    else
      printf("NO\n");

    if(T)
      printf("\n");

    destroy(root);

  }

  return 0;

}
