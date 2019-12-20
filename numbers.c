#include<stdio.h>
int main()
{
	 int n,r,rev=0,s;
	 printf("enter a number:");
	 scanf("%d",&n);
	 	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	 
	 while(rev!=0)
	 {
	 	s=rev%10;
	 
	 
	 
	      switch(s)
	      {
	    	case 0:printf("\tzero");
	    	break;
	    	case 1:printf("\tone");
	    	break;
	    	case 2:printf("\ttwo");
	    	break;
	 	    case 3:printf("\tthree");break;
	    	case 4:printf("\tfour");break;
	    	case 5:printf("\tfive");break;
	    	case 6:printf("\tsix");break;
	    	case 7:printf("\tseven");break;
	    	case 8:printf("\teight");break;
	    	case 9:printf("\tnine");
	    	break;
	    	default:printf("not valid");
	    }
	    rev=rev/10;
	
	 }
	 return 0;
}
