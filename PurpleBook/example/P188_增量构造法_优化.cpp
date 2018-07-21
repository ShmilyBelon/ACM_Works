#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e3+10;
int S[maxn],subS[maxn];
/*
* 1,S为集合，输入必须没有重复元素，subS是S的非空子集
* 2,S必须先排序保证其为有序，默认升序则输出的非空子集按字典序输出
* 3,在print_subset函数中第二个for循环的功能是每次在S中选一个元素入
*subS,保证每次选入的元素比上一次选入的元素要大，这样一来保证了输出子集按
*字典序，最重要的是这样才能有效的去重，因为{1,3,2}不能被输出，因为在其之
*前必然有{1,2,3}被输出了，它们是相同的集合。每次放入的元素比上一次放入的大
*正好可以保证这一点。也就是集合有无序性，升序的输出保证了其唯一性。
* 4,mindex是重点。每次从S中取元素到subS中的时候，必须保证取的比上
*一次取的大，那在有序的S中可以采用遍历的方法从第cur(因为有序)个逐个比较，直到找到第一个比
*subS[cur-1]大的那个i开始，直到i=n-1,每一个都尝试放到subS[cur]的位置
*
*   当然采用这里的mindex方法最好，每次记录在S中找到比subS[i-1](i>=1)大的元素
*的下标i,在下一层递归时候就用i+1做参数就好啦。
*/

void print_subset(int n,int S[],int subS[],int cur,int mindex)
{
    for(int i=0;i<cur;i++) printf(" %d ",subS[i]);
    printf("\n");

    for(int i=mindex;i<n;i++)
    {
        subS[cur]=S[i];
        print_subset(n,S,subS,cur+1,i+1);
    }




}

int main(void)
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        memset(subS,0,n);
        for(int i=0;i<n;i++) scanf("%d",&S[i]);
    
        sort(S,S+n);
        print_subset(n,S,subS,0,0);
    
    }


}

