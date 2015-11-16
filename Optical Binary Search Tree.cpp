using namespace std;
#include<iostream>
#include<conio.h>
#include<limits.h>

inline
      int sum(int arr[],int key[],int i,int j)
      {
          int sum=0;
          for(int a=i;a<=j;a++)
          sum=sum+key[a];
          
          return sum;
          }

class OBST
{
      public:
             int obst(int arr[],int key[],int n)
             {
                int C[n][n];
                int i,j,L,r,c,;
                //initialise diagonal elements C[x][x] their key values
                for(i=0;i<n;i++)
                C[i][i]=key[i];
                
                for(L=2;L<=n;L++)
                {
                      for(i=0;i<=n-L+1;i++)
                      {
                            j=i+L-1;
                            C[i][j]=INT_MAX;   //setting values to be infinity INT_MAX stores max value that can be stored in an integer
                            for(r=i;r<=j;r++)
                            {
                                  c=((r>i) ? C[i][r-1] : 0) + ((r<j) ? C[r+1][j] : 0) + sum(arr,key,i,j);
                                  if(c<C[i][j])
                                  C[i][j]=c;           
                                             }              
                                           }
                                 
                                 }
                 return C[0][n-1];                
                
                }   
      };
      
      
          
          int main()
{
    int arr[] = {10, 12, 20};
    int key[] = {34, 8, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    OBST x;
    cout<<x.obst(arr,key,n);
    getch();
    return 0;
}
