using namespace std;
#include<iostream>
#include<conio.h>
#include<limits.h>

class MCM
{
   public:
          int mcm(int arr[],int n)
          {
            int i,j,k,L,cost;   // Matrix Ai has dimension p[i-1] x p[i] for i = 1..n
            int C[n][n];        /* C[i,j] = Minimum number of scalar multiplications needed to compute
                                the matrix A[i]A[i+1]...A[j] = A[i..j] where dimention of A[i] is
                                p[i-1] x p[i] */
            
            for(i=1;i<n;i++)
            C[i][i]=0;
            
            for(L=2;L<n;L++)
            {
                for(i=1;i<=n-L+1;i++)
                {
                     j=i+L-1;
                     C[i][j]=INT_MAX;
                     for(k=i;k<=j-1;k++)
                     {
                           cost=C[i][k]+C[k+1][j]+arr[i-1]*arr[k]*arr[j];
                           
                           if(cost<C[i][j])
                           C[i][j]=cost;             
                                        }                
                                     }            
                            }
              return C[1][n-1];
              }   
      };
      
      int main()
      {
         int arr[] = {1, 2, 3,4};
         int n = sizeof(arr)/sizeof(arr[0]);  
         MCM x;
         cout<<x.mcm(arr,n);
         getch();
         return 0;
          }
