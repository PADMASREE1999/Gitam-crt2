//reverse of a given number
//input:123
//output:321
#include<stdio.h>
int main()
{
	int n,i,r,rev=0;
	printf("enter a value");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("%d",rev);
	return 0;
}
