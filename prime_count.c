#include<stdio.h>
int main()
{
	int a[10]={2,7,9,13,23,25,17,19,10,100};
	int n,i,j,count=0;
	n=sizeof a/sizeof a[0];
	for(i=0;i<n;i++)
	{
		for(j=2;j<=a[i];j++)
		{
			if(a[i]%j==0)
				break;
		}
		if(a[i]==j)
		{
			count++;
			printf("%d\n",a[i]);
		}
	}
	printf("no.of prime numbers=%d\n",count);
}
