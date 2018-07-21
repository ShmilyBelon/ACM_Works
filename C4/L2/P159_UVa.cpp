#include<bits/stdc++.h>
//#include<tr1/unordered_map>
const int maxn = 1e6+10;
using namespace std;
unordered_map<int,int>nosum;


struct TREE
{
  int data;
  int no;
  TREE* left;
  TREE* right;
  TREE(): left(NULL),right(NULL) {}
}tree[maxn];

int minno=INT_MAX;
int maxno=INT_MIN;
int cnt=0;
int res;

void build(TREE* &rt , int no)
{
  int rtd=0;
  if(  (res=scanf("%d",&rtd))!=1  || rtd==-1)
    return ;

  cnt++;
  rt=&tree[cnt];
  rt->data=rtd; rt->no=no;
  if(nosum.count(no))
    nosum[no] += rtd;
  else
    nosum[no]=rtd;

  no>maxno ? (maxno=no) : maxno;
  no<minno ? (minno=no) : minno;


  build(rt->left,no-1);
  build(rt->right,no+1);
  return ;

}



int main(void)
{
 int kase=0;
  while(1)
  {
    memset(tree,0,sizeof tree);
    cnt=0;
    minno=INT_MAX;
    maxno=INT_MIN;
    nosum.clear();
    res=1;
    TREE* root;
    build(root,0);



    if(!cnt  &&  res!=EOF)
      continue;
    else if(!cnt)
      break;
    else
    {
      printf("Case %d:\n",++kase);
      for(int i=minno;i<=maxno;i++)
      {
        if(i!=maxno)
          printf("%d ",nosum[i]);
        else
          printf("%d\n",nosum[i]);
      }

    }

  }

  return 0;


}
