using namespace std;
#include<iostream>
#include<conio.h>
#define edit_cost 1
class ED
{
   public:
          int ed(char *arr1,char *arr2,int n1,int n2)
          {
             int corner,left,top;
             int T[n1+1][n2+2]; 
             
             for(int i=0;i<n1+1;i++)
               T[0][i]=i;
               
             for(int i=0;i<n1+1;i++)
               T[i][0]=i;  
             
             for(int i=1;i<n1+1;i++)
             {
                 for(int j=1;j<n2+1;j++)
                 {
                      /* left=T[i][j-1];
                      left=left+edit_cost;
                      
                      top=T[i-1][j];
                      top=top+edit_cost;
                      
                      corner=T[i-1][j-1];
                      corner=corner+(arr1[i-1]!=arr2[j-1]);
                      
                      T[i][j]=min(left,top,corner); */  //or simply 
                      T[i][j]=min(T[i-1][j-1]+(arr1[i-1]!=arr2[j-1]),min(T[i-1][j],T[i][j-1])+1);// inside the loop
                         }    
                     }
                     return T[n1][n2];
              }
              };
              inline        
              int min(int a,int b,int c)
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
             
      
      
      
      int main()
      {
         char arr1[]="sunday";
         char arr2[]="saturday";
         int n1=strlen(arr1);
         int n2=strlen(arr2);
         ED x;
         cout<<x.ed(arr1,arr2,n1,n2);
         getch();
         return 0; 
          }
