#include<cstdlib>
#include<cstdio>
#include<cstring>

const int maxn = 1000+10;
char s1[maxn];
char s2[maxn];

int main(void)
{
  long a,b;
  char* id,*p=NULL; char** pid=&id;
  while(scanf("%s",s1)!=EOF)
  {
     fgets(s2,maxn,stdin);
    // printf("s1:  %s\ns2: %s\n",s1,s2);


     int len1 = strlen(s1);
     int len2 = strlen(s2);
     a=-1;b=-1;

     int aj=0,bj=0;
     a=strtol(s1,pid,10);
     p=s1;

     if(a<=0)
     {
       aj=-1;
     }
     else if( (a>1000) || (**pid!='\0') )
     {
        aj=-1; //printf("pid: %c\n",**pid);
     }


     else
       aj=0;

    p=s2;
    b = strtol(s2,pid,10);
     if(b<=0)
     {
       bj=-1;
     }
     else if( (b>1000) || (**pid!='\n') )
     {
       bj=-1; //printf("pid: %c\n",**pid);
     }

     else
       bj=0;

  // printf("a: %d  b: %d\n",a,b);



     if(aj==0  && bj==0)
       printf("%d + %d = %d\n",a,b,a+b);
     else if(aj==0 && bj==-1)
        printf("%d + ? = ?\n",a);
     else if(aj==-1  && bj==0)
        printf("? + %d = ?\n",b);
     else
        printf("? + ? = ?\n");

  }

return 0;

}
