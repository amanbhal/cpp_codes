#include <stdio.h>
#include<conio.h>
  #define f(a,b) a##b
  #define g(a)   #a
  #define h(a) g(a)

  int main()
  {
          printf("%s\n",h(f(1,2)));
          printf("%s\n",g(f(1,2)));
          getch();
          return 0;
  }
  
  /* The ## concatenates two tokens together. It can only be used in the preprocessor.

f(1,2) becomes 1 ## 2 becomes 12.

The # operator by itself stringifies tokens: #a becomes "a". Therefore, g(f(1,2)) becomes "f(1,2)" when the preprocessor is done with it.

h(f(1,2)) is effectively #(1 ## 2) which becomes #12 which becomes "12" as the preprocessor runs over it.  */
