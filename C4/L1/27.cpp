#include<bits/stdc++.h>

using namespace std;

const int maxn = 11+10;

char s[maxn];
vector<int>arr;
set<int>cnt;
int index_[maxn];


bool cmp(int a,int b)
{
    return a>b;
}

int main(void)
{
   while(scanf("%s",s)!=EOF)
   {
     int len = strlen(s);
     for(int i=0;i<len;i++)
     {
        cnt.insert(s[i]-'0');
     }
     for(set<int>::iterator it = cnt.begin();it!=cnt.end();++it)
        arr.push_back(*it);

     sort(arr.begin(),arr.end(),cmp);
     for(int i=0;i<len;i++)
     {
       for(int j=0;j<arr.size();j++)
       {
         if(s[i]-'0' == arr[j])
         {
           index_[i]=j;
           break;
         }

       }

     }
     printf("int[] arr = new int[]{%d",arr[0]);
     for(int i=1;i<arr.size();i++)
     {
        printf(",%d",arr[i]);
     }
     printf("};\n");
     printf("int[] index = new int[]{%d",index_[0]);
     for(int i=1;i<len;i++)
     {
       printf(",%d",index_[i]);
     }
     printf("};\n");





   }

   return 0;



}

