#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e3+10;

int P[maxn];

int main(void)
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&P[i]);

        sort(P,P+n,less<int>());//默认升序，因此less函数可以省略
        do
        {
            for(int i=0;i<n;i++) printf(" %d ",P[i]);
            printf("\n");
        }
        while(next_permutation(P,P+n,less<int>()));//默认按照字典序升序，因此less函数可以省略


    
    }

    return 0;

}
