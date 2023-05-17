#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int my_strcmp(char *,char *);
int main()
{
	int n;
	char *s="vector";
	char *t="vectorind";
	n=my_strcmp(s,t);
	printf("n=%d\n",n);
}
int my_strcmp(char *s,char *t)
{

	int i,j,k;
	for(i=0;s[i];i++);
	for(j=0;t[j];j++);
	if(i==j)
	{
		for(k=0;k<i;k++)
		{
			if(s[i]!=t[i])
				return 0;
			else
				continue;
		}
		return 1;
	}
	else
		return 0;
}

