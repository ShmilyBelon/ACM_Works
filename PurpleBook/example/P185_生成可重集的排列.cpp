#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e3+10;
int  P[maxn];
int  A[maxn];
unordered_map<int ,int>repeat;

void print_permutation(int n, int P[], int A[] , int cur)
{
    if(cur==n+1)
    {
        for(int i=1;i<=n;i++) printf(" %d ",A[i]);
        printf("\n");
    }

    else for(int i=1;i<=n;i++)
            if(i==1||P[i]!=P[i-1])
            {
                if(repeat[P[i]])
                {
                    A[cur]=P[i];
                    repeat[P[i]]--;
                }
                else
                    continue;

                print_permutation(n,P,A,cur+1);
                repeat[P[i]]++;

            }



}




int main(void)
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        repeat.clear();
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&P[i]);
            if(!(repeat.count(P[i])) )
                repeat[P[i]]=1;
            else
                repeat[P[i]]++;
        }

        sort(P+1,P+1+n,less<int>()) ; 
        
       // for(int i=1;i<=n;i++)
      //      printf("%d" , P[i]);

        print_permutation(n,P,A,1);
        
    
    }

    return 0;


}
