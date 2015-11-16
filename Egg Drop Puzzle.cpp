using namespace std;
#include<iostream>
#include<conio.h>
#include<limits.h>

class EGG
{
   public:
          int egg(int n,int k)
          {
            int E[n+1][k+1];
            
            for(int i=1;i<=k;i++)
            {
                    E[1][i]=i;              //for 1 egg ans is equal to numbr of floors
                    }
              
              for(int i=1;i<=n;i++)
              {
                    E[i][0]=0;              //for 0 floors ans is 0
                    E[i][1]=1;              //for 1 floor ans is 1  
                      }
                      
               for(int i=2;i<=n;i++)
               {
                   for(int j=2;j<=k;j++)
                   {
                        E[i][j]=INT_MAX;
                        for(int a=1;a<=j;a++)
                        {
                        /* two cases
                        1)if egg breaks from xth floor: then we consider only x-1 floors with i-1 eggs i.e. E[i-1][j-1]
                        2)if egg doesnt breaks from xth floor: then we consider upper floors i.e. j-x floors with i eggs E[i][j-x] */
                        
                        
                        int c=1+max(E[i-1][a-1],E[i][j-a]);   //Since we need to minimize the number of trials in worst case, we take the  
                                                                 //maximum of two cases. We consider the max of above two cases for 
                                                                 //every floor and choose the floor which yields minimum number of trials.
                        
                        if(c<E[i][j])
                        E[i][j]=c;
                        }   
                           }    
                       }       
              return E[n][k];
              }  
               
      };
      
      inline
      int max(int a,int b)
      {
          return (a>b) ? a :b;
          }
          
          
       int main()
       {
          int n=2,k=36;
          EGG x;
          cout<<x.egg(n,k);
          getch();
          return 0; 
           }   
