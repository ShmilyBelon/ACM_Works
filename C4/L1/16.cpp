#include<cstdio>
#include<cctype>
#include<cstring>
const int maxn = 100+10;
char s[maxn];
int w[17]={ 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char M[11]={'1', '0', 'X' ,'9', '8', '7', '6', '5', '4', '3' ,'2'};

int main(void)
{


   //FILE* fp1 = freopen("in.txt","r+",stdin);
   //FILE* fp2 = freopen("out.txt","w+",stdout);

 int n;
 while( (scanf("%d",&n)!=EOF ) && n)
 {
 int done=0;
   while(n--)
   {
     scanf("%s",s);
     int check=0,sum=0;
     for(int i=0;i<17;i++)
     {
       if(isdigit(s[i]))
       {
           sum += w[i]*(s[i]-'0');

           continue;
       }

       else
       {
         done=1;
         check=1;
         printf("%s\n",s);
         break;
       }
     }
     if(!check)
     {
       if(s[17]!=M[sum%11])
       {
         printf("%s\n",s);
         done=1;
       }

     }

   }
   if(!done)
     printf("All passed\n");

 }


 return 0;

}
