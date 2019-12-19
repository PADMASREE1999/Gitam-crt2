//To print fibonacci series
//input: 8
//output: 0 1 1 2 3 5 8 13
#include<stdio.h>
int main()
{
	int n,x1=0,x2=1,x,i;
	printf("enter the number of terms:");
	scanf("%d",&n);
	printf("%d\t%d\t",x1,x2);
	
		for(i=3;i<=n;i++)
		{
			x=x1+x2;
			printf("%d\t",x);
			x1=x2;
			x2=x;
			
		}
		return 0;
		
	
}

