//find if the given no is armstrong or not
// input: 153
// output: it is armstrong

//input: 123
//output:not armstrong
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int n,i,sum=0,temp,r,l=0;
	printf("enter a number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		l++;
		n=n/10;
	}
	while(n!=0)
	{
		r=n%10;
		sum=sum+pow(r,l);
		n=n/10;
    }  
    	if(temp==sum)
	printf("armstrong number");
	else
	printf("not armstrong");
	return 0;
	
}
