#include<stdio.h>
int main()
{
	int num,f=1;
	printf("Enter the nnumber:\n");
		scanf("%d",&num);
	while(num>0)
	{
		f=f*num;
		num--;
	}
	printf("the factorial of the given number is %d\n",f);
}
