//find sum of n natural numbers
//input is 10
//output is 55
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
