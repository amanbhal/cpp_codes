#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
 char string[100];
 int l,a,b,count=0;
 printf("enter a string\n");
 scanf("%s",&string);
 l=strlen(string);
 a=0;
 b=l-1;
 while(a<b)
 {
           if(string[a]==string[b])
           {
                   a++;
                   b--;
                                   }
            else
            {
                count++;
                a++;
                }                       
}
 printf("the number of characters to be inserted to convert the given string into palindrome is %d\n",count);       
           
 getch();
 return 0;   
}
