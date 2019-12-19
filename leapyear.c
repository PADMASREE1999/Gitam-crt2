#include<stdio.h>
int main()
{
	int year;
	scanf("%d",&year);
	
 (year%4==0 && year%100!=0) ? printf("LEAP YEAR") :
        (year%400 ==0 ) ? printf("LEAP YEAR") : printf("NOT A LEAP YEAR");
       return 0; 
    }
