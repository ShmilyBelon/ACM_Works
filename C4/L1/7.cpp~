#include<bits/stdc++.h>

char *s[]=
{
	"ling","yi","er","san","si","wu",
	"liu","qi","ba","jiu"

};


char read[100];

int main(void)
{

	// freopen("in.txt","r+",stdin);
	// freopen("out.txt","w+",stdout);


	while(scanf("%s",read)!=EOF)
	{
		int n=strlen(read);
		for(int i=0;i<n;i++)
		{
			if( read[i]=='-')
				printf("%s","fu ");
			else if(i<n-1)
			{
				printf("%s ",s[ read[i]-'0' ]);
			}
                        else
                          printf("%s",s[ read[i]-'0' ]); 
		}
		printf("\n");

	}


	return 0;

}








