#include<stdio.h>
int main()
{
	int a=123456;
	long int b=123456789;
    unsigned	int c=560000;
	printf("a=%d",a);
	printf("\nb=%d",b);
	printf("\n%u",c);
	printf("\n&a=%d",&a);//address is signed
	printf("\n&a=%u",&a);//address is unsigned
	printf("\n&a=%p",&a);//address is hexadecimal

	return 0;
}
