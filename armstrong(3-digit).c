//find if the given no is armstrong or not
// input: 153
// output: it is armstrong

//input: 123
//output:not armstrong
#include<stdio.h>
int main()
{
	int n,i,sum=0,temp,r;
	printf("enter a 3-digit number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	printf("armstrong number");
	else
	printf("not armstrong");
	return 0;
	
}
