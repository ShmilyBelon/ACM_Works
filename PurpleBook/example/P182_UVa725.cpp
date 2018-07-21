#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e1+10;

char fz[maxn];
char fm[maxn];
bool done[10];

bool jud(char* s1, char* s2)
{
    memset(done , 0 ,sizeof(done));
   for(int i=0;i<5;i++)
   {
      int j1=s1[i]-'0';
      int j2=s2[i]-'0';

      if( (done[j1] || done [j2])||(j1==j2) )
          return false;
      else
      {
        done[j1]=true;
        done[j2]=true;
      }
   
   } 
    
  return true;
}


int main(void)
{
   int n;
   int nfz;
   int yes=0;
   int T=0;
   while(scanf("%d",&n),n)
   {
      if(T++) printf("\n");
 //      printf("n: %d\n",n);
      yes =0 ;
      memset(done , 0 ,sizeof(done));
      for(int i=1;i<=99999;i++)
      {
        nfz=i*n;
        if(nfz>=100000)
            break;
        sprintf(fz,"%05d",nfz);
        sprintf(fm,"%05d",i);

     //  printf("fz: %s\n",fz);
     //  printf("fm: %s\n",fm);


       
        if(jud(fz,fm))
        {
         printf("%s / %s = %d\n",fz,fm,n);
         yes=1;
        }
              
      }
      
      
      if(!yes)
        {
          printf("There are no solutions for %d.\n",n);
        
        } 
  //      printf("\n");     
   
   }
  
return 0;


}
