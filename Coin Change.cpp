using namespace std;
#include<iostream>
#include<conio.h>

class CC
{
   public:
          int cc(int arr[],int m,int n)
          {
            int C[n+1][m];   // C[i][j] will store sol for sum=i with using j no.of coins
            
            for(int i=0;i<m;i++)
            C[0][i]=1;
              
            for(int i=1;i<n+1;i++)
            {
                for(int j=0;j<m;j++)
                {
                    //including arr[i] element
                    int x=(i-arr[j]>=0) ? C[i-arr[j]][j] : 0;
                    //excluding arr[i] element
                    int y=(j>=1) ? C[i][j-1] : 0;
                    //total count
                    C[i][j]=x+y;    
                        }    
                    }  
              return C[n][m-1];      
              }   
      }; 
      
      int main()
      {
          int arr[] =  {2, 5, 3, 6};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = 10;
    CC x;
    cout<<x.cc(arr,m,n);
    getch();
    return 0;
          }
