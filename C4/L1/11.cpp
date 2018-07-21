#include<bits/stdc++.h>

using namespace std;
const int maxn = 10000 + 10;
char s1[maxn];
char s2[maxn];

int main(void)
{

   //FILE* fp1 = freopen("in.txt","r+",stdin);
   //FILE* fp2 = freopen("out.txt","w+",stdout);

  while(fgets(s1,maxn,stdin)!=NULL)
  {
    fgets(s2,maxn,stdin);
    int n1=strlen(s1)-1;
    int n2=strlen(s2)-1;
    for(int i=0;i<n1;i++)
    {
       for(int j=0;j<n2;j++)
       {
         if(s1[i]==s2[j])
           goto  NEXT;
       }
       printf("%c",s1[i]);

       NEXT: ;
    }
    printf("\n");


  }
return 0;

}



