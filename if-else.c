//print square if even and cube if the given no is odd
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2==0)
	printf("%d",n*n);
	else
	printf("%d",n*n*n);
	return 0;

}
