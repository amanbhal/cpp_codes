#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
class JM
{
     public:
             void JN(int);
      };
      
      void JM::JN(int a)
      {
           int i,j[10];
           int z=0;
           while(a>=1)
           {
               i=a%10;
               j[z]=i;
               a=a/10;
               z++;      
                     }
           int sum=0;
           do {for(i=0;i<z;i++)
           {
               sum=sum+(j[i]*j[i]);            
                           } }while(sum!=1 || sum!=2)
                               
           }
           
  int main()
  {
     JM a;
      a.JN(1224);
      getch();
      return 0;
      }         
