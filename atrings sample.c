/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//strings sample program
#include <stdio.h>

int main()
{
    char x[100];
    scanf("%[^\n]s",x); //scanf("%s",x); -> this will print onlu upto the first white space.
    // [^\n] is used to ignore the white spaces in the string.
    //gets(x); -> some compilers do not support this function as it is dangerous.
    printf("%s",x);
    

    return 0;
}
