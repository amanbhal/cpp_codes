#include<stdio.h>
#include<conio.h>

int main()
{
  int num=1;
  label:
        if(num<=100)
        {
            printf("%d\n",num);
            num++;
            goto label;        
                    }  
                    
  getch();
  return 0;                   
}
