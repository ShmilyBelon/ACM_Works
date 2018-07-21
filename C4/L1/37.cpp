#include<bits/stdc++.h>

int main(void)
{
  int a,b;
  while(scanf("%d%d",&a,&b)!=EOF)
  {
    if(b==0)
     printf("%d/0=Error\n",a);
    else if(b<0)
      printf("%d/(%d)=%.2f",a,b,1.0*a/(1.0*b));

    else
      printf("%d/%d=%.2f\n",a,b,1.0*a/(1.0*b));


  }

  return 0;

}
