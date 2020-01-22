/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* input:19 1 121 55 78 56
   k=3
   output:55
   disc: count the no of palindromes and print the kth one.
   */
   #include <stdio.h>
 

int ispalindrome(int x)
{
    //reverse=original - true 1-int
    //reverse!=original - false 0-int
    int rev=0,buffer=x;
    while(x!=0)
    {
        rev=rev*10+(x%10);
        x/=10;
        
    }
    if(buffer==rev)
    {
        return 1;
    }
    else
    {
        return 0;
        
    }
    
}
int main()
{
    int a[100],n,i,cnt=0,k;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)   
      {  if(ispalindrome(a[i]))
        {
            cnt++;
            if(cnt==k)
            {
                printf("%d",a[i]);
                break;
            }
            
        }
    }
   
    return 0;
}
