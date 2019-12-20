#include<stdio.h>
int main()
{
	int a=5;
	int p=(++a)+(a++)+(a++)+(++a);
	printf("%d %d",a,p);
	return 0;
}
