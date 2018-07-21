#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
using namespace std;
const int N = 105;
int n,m,son[N],topoSort[N],t;
char O[2*N];
vector<int>G[N];

void init(){
    for(int i=1; i<=n; ++i){
        G[i].clear();
    }
    memset(son, 0, sizeof(son));
}

int main(){
    int u,v;
    while(scanf("%d%d",&n,&m)&&n+m){
        init();
        for(int i=0; i<m; ++i){
            scanf("%d%d",&u,&v);
            G[u].push_back(v);
            ++son[v];
        }
        int num=n;
        queue<int>q;
        for(int i=1; i<=n; ++i){
            if(!son[i]) q.push(i);
        }
        int pos=0;
        while(!q.empty()){
            int t=q.front();
            q.pop();
            topoSort[pos++] = t;
            for(int v=0; v<G[t].size(); ++v)
                if(--son[G[t][v]]==0)
                    q.push(G[t][v]);
        }
        for(int i=0; i<pos; ++i){
            if(!i)printf("%d",topoSort[i]);
            else printf(" %d",topoSort[i]);
        }
        printf("\n");
    }
    return 0;
}
