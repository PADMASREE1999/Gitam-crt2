//find the root digoit of the given no
//input:1947
//output:3
//input:9848612456
//output:8
#include<stdio.h>
int main()
{
long long int n,sum=0,r;
	printf("enter the number:");
	scanf("%lld",&n);
	a:
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if(sum>9)
	{
		n=sum;
		sum=0;
		goto a;
	}
	printf("%lld",sum);
	return 0;
}
