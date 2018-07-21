#include<bits/stdc++.h>
//#include "string.h"
//#include <vector>
//#include<bits/stdc++.h>
//#include <hash_map>
//#include <hash_set>
#include<unordered_map>
//#include <list>
//#include <vector>
//#include <utility>
using namespace std;
//using namespace __gnu_cxx;

char s[100];
//100000000
//10000 000
//map<string,string>M;
  //unordered_map<string, string> M;
unordered_map<string, string> M;
int main(void)
{


   M["JianDao"]="ChuiZi";
   M["ChuiZi"]="Bu";
   M["Bu"]="JianDao";

  int k;
  while(scanf("%d",&k)!=EOF)
  {
    int cnt=0;
    while(scanf("%s",s))
    {
      cnt++;
      if(strcmp(s,"End"))
      {
        if(cnt%(k+1))
        {
         // string s1=s;
          printf("%s\n",M[s].c_str());

        }
        else
        printf("%s\n",s);

      }
      else
       break;


    }

  }

  return 0;
}




