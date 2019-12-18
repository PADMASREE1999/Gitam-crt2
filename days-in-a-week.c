//day of a week
#include<stdio.h>
int main()
{
	int day;
	scanf("%d",&day);
	switch(day)
	{
		case 1:printf("MONDAY");
		break;
		case 2:printf("TUESDAY");
		break;
		case 3:printf("WEDNESDAY");
		break;
		case 4:printf("THURSDAY");
		break;
		case 5:printf("FRIDAY");
		break;
		case 6:printf("SATURDAY");
		break;
		case 7:printf("SUNDAY");
		break;
		default:
			printf("Invalid entry");
			break;
	
	}
	return 0;
}
