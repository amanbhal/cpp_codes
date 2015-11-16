#include<stdio.h>
#include<conio.h>
      
      int aSmile,bSmile;
      void insert()
      {
           printf("enter 1 if monkey 'a' is smiling otherwise enter 0\n");
           scanf("%d",&aSmile);
           printf("enter 1 if monkey 'b' is smiling otherwise enter 0\n"); 
           scanf("%d",&bSmile);
           }
           
      int Trouble(int aSmile,int bSmile)
      {
           if(aSmile==1 && bSmile==1)
           return 1;
           else if(aSmile==0 && bSmile==0)
           return 1;
           else
           return 0;
           }     
          
      
      
int main()
{
 int n;
 insert();
 n=Trouble(aSmile,bSmile);
 if(n==1)
 printf("TROUBLE");
 else
 printf("NO TROUBLE");
 getch();
 return 0;
 
    
}      
