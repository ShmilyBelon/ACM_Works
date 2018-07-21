#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6+10;
int P[maxn];
int A[maxn];
unordered_map<int ,int>have;
unordered_map<int ,int>in;



void  print_permutation(int n ,int A[], int P[], int cur )
{
  if(cur>n-1)
  {
    for(int i=0;i<n;i++)
    {  
       if(!i) 
         printf("%d",A[i]);
    
       else
           printf(" %d",A[i]);

    } printf("\n");
  }

  else
    for(int i=0;i<n;i++)
     if(!i || P[i]!=P[i-1])
     {  
        if(have.count(P[i]) &&  in.count(P[i])) 
        {
            if(have[P[i]]<=in[P[i]])
                continue;
        }
      
              
              
  //  if(!i || P[i]!=P[i-1])
       { 
        A[cur]=P[i];
        if(in.count(P[i]))
           in[P[i]]++;
        else
           in[P[i]]=1;

        print_permutation(n,A,P,cur+1);
        if(in[P[i]]>1)
           in[P[i]]--;
        else
           in.erase(P[i]);
        }  
      
    }
  
}


int main(void)
{
  
    int n;
    while(scanf("%d",&n)!=EOF)
    {
      have.clear();  
      for(int i=0;i<n;i++)
      {
        scanf("%d",&P[i]);
        if(have.count(P[i]))
            have[P[i]]++;
        else
            have[P[i]]=1;

      }

      sort(P,P+n);
    
      print_permutation(n,A,P,0);
    
    }

    return 0;



}


