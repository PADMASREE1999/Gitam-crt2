//find out if the number is perfect or not
//ex:6's factors-1,2,3,6 => 1+2+3=6
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
	printf("%d is perfect no",n);
	else
	printf("%d is not a perfect no",n);
	return 0;
	
}
