using namespace std;
#include<iostream>
#include<conio.h>

class KNAP
{
   public:
          int knap(int wt[],int val[],int n,int W)
          {
            int w;
            int K[n+1][W+1];  
            
            for(int i=0;i<=n;i++)
            {
               for(w=0;w<=W;w++)
               {
                   /*three case: 1) if i==0 or w==0 then W[i][w]=o
                    2) if weight of i-1 is less than w then we can either
                    include the item or exclude it.
                    including: val[i-1]+W[i-1][w-wt[i-1]]
                    excluding: W[i-1][w]
                    3) if weight of i-1 is greater than w then we have to exclude the item. */  
                   
                   if(i==0 || w==0)                                             
                   K[i][w]=0;
                   
                   else if(wt[i-1]<=w)
                       K[i][w]=max(val[i-1]+K[i-1][w-wt[i-1]], K[i-1][w]);             
                                
                   else 
                   K[i][w]=K[i-1][w];             
                                } 
                                    
                    }
                return K[n][W];    
              }   
      };
      
      inline
      int max(int a,int b)
      {
          return (a>b) ? a : b;
          }
          
          
   int main()
    {
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    KNAP x;
    cout<<x.knap(wt,val,n,W);
    getch();
    return 0;
     }    
