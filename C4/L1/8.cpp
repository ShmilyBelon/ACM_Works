#include<cstdio>

int main(void)
{
  //FILE* fp1 = freopen("in.txt","r+",stdin);
  //FILE* fp2 = freopen("out.txt","w+",stdout);

  int a,b,sum=0;
  while(scanf("%d%d",&a,&b)!=EOF)
  {
     int cnt=0,sum=0;
     for(int i=a;i<=b;i++)
     {
        ++cnt;
        printf("%5d",i);
        if( !(cnt%5) || cnt==(b-a)+1 )
          printf("\n");
        sum+=i;
     }
     printf("Sum = %d\n",sum);

  }

  return 0;

}
