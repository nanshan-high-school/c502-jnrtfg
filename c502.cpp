#include <iostream>
#include <string.h>


int main(int argc, char** argv) 
{
	int n,WordCount,total=0,True=0;
	char s[10],Ti[101];
	scanf("%d %s",&n,s);
	WordCount=strlen(s);
	for(int i=1;i<=n;i++)
	{
		for(int k=0;k<=100;k++)
		{
			Ti[k]=0;
		}
		scanf("%s",Ti);
		for(int l=0;l<=100;l++)
		{
			for(int m=0;m<=WordCount-1;m++)
			{
				if(Ti[l]==s[m])
				{
					l++;
					True++;
				}
				else
				{
					True=0;
				}
				if(True==WordCount)
				{
					total++;
					break;
				}
			}
		}
	}
	printf("%d\n",total);
	total=0;
	True=0;
	scanf("%d %s",&n,s);
	WordCount=strlen(s);
	for(int i=1;i<=n;i++)
	{
		for(int k=0;k<=100;k++)
		{
			Ti[k]=0;
		}
		scanf("%s",Ti);
		for(int l=0;l<=100;l++)
		{
			for(int m=0;m<=WordCount-1;m++)
			{
				if(Ti[l]==s[m])
				{
					l++;
					True++;
				}
				else
				{
					True=0;
				}
				if(True==WordCount)
				{
					total++;
					break;
				}
			}
		}
	}
	printf("%d",total); 
	return 0;
}