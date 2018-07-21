#include <bits/stdc++.h>
using namespace std;
#define retunr return
#define pb push_back
#define mp make_pair
#define null NULL
#define PI M_PI
#define sc(x) scanf("%d", &x)
#define sc64(x) scanf("%I64d", &x)
#define pr(x) printf("%d", (x))
#define sp putchar(' ')
#define ln putchar('\n')
#define pr64(x) printf("%I64d", (x))
#define rep(i,n) for (int i = 1;i <= (n); ++i)
#define repr(i,n) for (int i = (n);i > 0; --i)
#define repab(i,a,b) for (int i = (a);i <= (b); ++i)
#define reprab(i,a,b) for (int i = (b);i >= (a); --i)
#define Rep(i,n) for (int i = 0;i < (n); ++i)
#define Repr(i,n) for (int i = (n)-1;i >= 0; --i)
#define Repab(i,a,b) for (int i = (a);i < (b); ++i)
#define Reprab(i,a,b) for (int i = (b)-1;i >= (a); --i)
#define fi first
#define se second
#define SET(__set, val) memset(__set, val, sizeof __set)
#define prf(x) printf("%.20f", x)
typedef double db;
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define N 100010
#define M 1024
#define MOD 1000000007
void Add(ll &a, ll b){a = (a+b)%MOD;}
void Min(ll &a, ll b){a = (a+MOD-b)%MOD;}
void Mul(ll &a, ll b){a = (ll)a*b%MOD;}
ll gcd(ll a, ll b){if(!b)return a;return gcd(b,a%b);}
ll pow(ll a, ll b){ll res(1);while(b){if(b&1)res=res*a%MOD;a=a*a%MOD;b>>=1;}return res;}
ll powM(ll a, ll b, ll mod){ll res(1);while(b){if(b&1)res=res*a%mod;a=a*a%mod;b>>=1;}return res;}

const int infi = 2147483647;
const ll infl = 9223372036854775807ll;

/*
struct E{
	int v, w, n;
}G[N];
int cnt, point[N];
void adde(int u, int v, int w = 0){
	G[++cnt]=(E){v,w,point[u]},point[u]=cnt;
	G[++cnt]=(E){u,w,point[v]},point[v]=cnt;
}
void Ginit(){
	cnt = 0;
	SET(point,0);
}
*/
/*
struct hh{
	int a, b;
	bool operator < (const hh &x) const{
		if(a==x.a)return b<x.b;
		return a<x.a;
	}
}a[N];
*/
int n, m, k, T;
int main(){
	freopen("1", "r", stdin);
/*
	int Case;
	sc(Case);
	rep(ca, Case){
		  printf("Case #%d: ", ca);
	}
*/
	return 0;
}
