#include<stdio.h>
int main()
{
	int num,sum=0,temp,temp1;
	printf("Enter the number:\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		temp1=temp%10;
		temp=temp/10;
		sum=temp1+sum;
	}
	printf("sum of the given digit number is %d\n",sum);
}



