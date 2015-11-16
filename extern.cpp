#include<stdio.h>
#include<conio.h>

extern int var = 0;
int main(void)
{
 var = 10;
printf("%d",var);
getch();
 return 0;
}


/*   facts about extern:
1. Declaration can be done any number of times but definition only once.
2. “extern” keyword is used to extend the visibility of variables/functions().
3. Since functions are visible through out the program by default. The use of extern is not needed in function declaration/definition. Its use is redundant.
4. When extern is used with a variable, it’s only declared not defined.
5. As an exception, when an extern variable is declared with initialization, it is taken as definition of the variable as well. 
http://www.geeksforgeeks.org/understanding-extern-keyword-in-c/
 */
