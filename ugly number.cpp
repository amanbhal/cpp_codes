using namespace std;
#include<iostream>
#include<conio.h>

class Ugly_no
{
      public:
             
             int ugly(int n)
             {
                int arr[n];
                int i2=0,i3=0,i5=0;
                arr[0]=1;
                int i;
                
               int mul_2=arr[i2]*2;
               int mul_3=arr[i3]*3;
               int mul_5=arr[i5]*5;
               int next=1;
                for(i=1;i<n;i++)
                {
                    next=min(mul_2,mul_3,mul_5);
                     arr[i]=next;
                     if(next==mul_2)
                     {
                         i2++;
                         mul_2=arr[i2]*2;           
                                    }
                      
                      if(next==mul_3)
                     {
                         i3++;
                         mul_3=arr[i3]*3;           
                                    }
                                    
                      if(next==mul_5)
                     {
                         i5++;
                         mul_5=arr[i5]*5;           
                                    } 
                                    
                                                                          
                                } 
                 return next;
                 }
                 
                 int min(int a,int b, int c)
                 {
                     if(a<=b)
                     {
                         if(a<=c)
                         return a;
                         else 
                         return c;    
                             }
                             
                     if(b<=c)
                     return b;
                     else
                     return c;        
                     }
      };
      
      
      int main()
      {
          int n=11;
          Ugly_no x;
          cout<<x.ugly(n);
          getch();
          return 0;
          }
