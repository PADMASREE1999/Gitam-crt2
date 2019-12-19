//print 1-n numbers using goto label
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the value of n");
	scanf("%d",&n);
	i=1;
	a:
		printf("%d\t",i);
		i++;
		if(i<=n)
		goto a;
		return 0;
}
