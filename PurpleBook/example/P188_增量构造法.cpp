#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn = 1e3+10;

int S[maxn];
int subS[maxn];

/*本例子中讨论的集合S中不能有重复元素*/
void print_subset(int n,int S[] , int subS[] , int cur)
{
    for(int i=0;i<cur;i++) printf(" %d ",subS[i]);
    printf("\n");

    for(int i=cur;i<n;i++)//i从cur开始是因为，比上一个加入子集的元素大的元素一定在S中下标cur～n范围内，因为S已经被排序。
    {
        if(cur>=1 && subS[cur-1]>=S[i])/*重点！这行的意思是当前选的加入子集合中的元素必须比上一个加入子集的元素大，通过这种有序来保证，集合的唯一性去除{1,3,2}这种情况，因为之前一定已经输出了{1,2,3},它们是同一个集合。*/
            continue;


        subS[cur] = S[i];
        print_subset(n,S,subS,cur+1);
    
    }



}


int main(void)
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        memset(subS,0,n);
        for(int i=0;i<n;i++)
            scanf("%d",&S[i]);

        sort(S,S+n);
        print_subset(n,S,subS,0);
    
    
    }


    return 0;

}
