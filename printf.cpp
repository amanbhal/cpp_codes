#include <stdlib.h>
  #include<conio.h>
  #include <stdio.h>
  void Error(char* s)
  {
      printf(s);   // important 
      return;
  }

  int main()
  {
      int *p;
      p =(int *)malloc(sizeof(int));
      if(p == NULL)
      {
          Error("Could not allocate the memory\n");
          Error("Quitting....\n");
          exit(1);
      }
      else
      {
          Error("No error");
      }
   getch();
      return 0;
  }

/*Rule :
int num=1234;
printf("%d",printf("%d",printf("%d",num)));

output: 123441

Inner printf returns Length of string printed on screen to the outer printf
*/
