#include<bits/stdc++.h>

const int maxn = 1000+10;

std::vector<int>ans;

int left[maxn];
int right[maxn];
int data[maxn];
bool done[maxn];
char s[maxn];
bool failed;
int cnt=1;
int root=1;

void addnode(int val,char s[])
{
   int u=root;
  int n=strlen(s);
  for(int i=0;i<n;i++)
  {
    if(s[i]=='L')
    {
      if(!left[u])  left[u]=++cnt;
      u=left[u];

    }
    else if(s[i]=='R')
    {
      if(!right[u])  right[u]=++cnt;
      u=right[u];
    }

    //printf("u : %d  left: %d right:%d\n",u,left[u],right[u]);
  }

  if(done[u]) failed=true;
  done[u]=true;
  data[u]=val;
 // printf(" u: %d data :  %d \n",u,data[u]);

}




bool read(void)
{
  int val;
  failed=false;
  for(;;)
  {
    if(scanf("%s",s)!=1) return false;
    if(!strcmp(s,"()"))  break;
    sscanf(&s[1],"%d",&val);
    addnode(val,strchr(s,','));
  }
  return true;

}


bool bfs(std::vector<int>& ans)
{
  int u=root;
  std::queue<int>Q;
  Q.push(u);
  ans.clear();
  while(!Q.empty())
  {
    u=Q.front();Q.pop();
   // printf("u : %d  left: %d right:%d\n",u,left[u],right[u]);
    ans.push_back(data[u]);
   // printf(" %d ",data[u]);
    if(done[u])
    {
       if(left[u]) Q.push(left[u]);
       if(right[u]) Q.push(right[u]);
    }
    else
      return false;
  }
  return true;
}



int main(void)
{
   while(1)
   {
     cnt=root=1;
     memset(left,0,sizeof(left));
     memset(right,0,sizeof(right));
     memset(done,0,sizeof(done));
     memset(data,0,sizeof(data));
     failed=false;

     if(!read())
       break;


     if(bfs(ans)&&(!failed))
      for(int i=0;i<ans.size();i++)
       {
         if(i==ans.size()-1)
           printf("%d\n",ans[i]);
         else printf("%d ",ans[i]);
       }
     else printf("not complete\n");

   }

  return 0;

}
