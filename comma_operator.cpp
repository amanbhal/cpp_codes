#include <stdio.h>
#include<conio.h>
int main()
{
        int a = 1,b;
        printf("a : %d\n",a);
getch();
        return 0;
}
/* Examples:               Descriptions:                                                                 Values after line is evaluated:
int a=1, b=2, c=3, i=0; // comma acts as separator in this line, not as an operator                      ... a=1, b=2, c=3, i=0
i = (a, b);             // stores b into i                                                               ... a=1, b=2, c=3, i=2
i = a, b;               // stores a into i. Equivalent to (i = a), b;                                    ... a=1, b=2, c=3, i=1
i = (a += 2, a + b);    // increases a by 2, then stores a+b = 3+2 into i                                ... a=3, b=2, c=3, i=5
i = a += 2, a + b;      // increases a by 2, then stores a into i. Equivalent to  (i = (a += 2)), a + b; ... a=5, b=2, c=3, i=5
i = a, b, c;            // stores a into i                                                               ... a=5, b=2, c=3, i=5
i = (a, b, c);          // stores c into i                                                               ... a=5, b=2, c=3, i=3

the code A[i, j] evaluates to A[j] with the i discarded
*/
