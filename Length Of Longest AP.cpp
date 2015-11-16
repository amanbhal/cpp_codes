using namespace std;
#include<stdio.h>
#include<conio.h>
#include<iostream>
class LLAP
{
      public:
             int llap(int arr[],int n)
             {
                 if(n<=2)
                 return n;
                 int i,j,k;
                 
                 int L[n][n];       //L[i][j] is number of terms starting with i and j as first and second numbers
                 for( i=0;i<n;i++)
                 {                               //intializing matrix elements with 2
                    for( j=0;j<n;j++)
                    {L[i][j]=2;}     
                         }
                 
                 int lap=2;
                 
                 for(i=n-2;i>=1;i--)             // Consider every element as second element of AP
                 {
                     int a=i-1,b=i+1;               // Search for a and b for i
                     while(a>=0 && b<n)
                     {
                          if(arr[a]+arr[b]<2*arr[i])
                              b++;
                          else if(arr[a]+arr[b]>2*arr[i])
                              a--;
                          else
                          {
                            L[a][i]=L[i][b]+1;
                            lap=max(lap,L[a][i]);
                            a--;
                            b++;  
                              }             
                               }    
                     
                         }
                  return lap;               
                 }
                 
                 
                 int max(int a,int b)
                 {
                     if(a>b)
                     return a;
                     else 
                     return b;
                     }              
      };
      
      
      int main()
      {
          int arr[]={1, 7, 10, 15,27,29};
          int n=sizeof(arr)/sizeof(arr[0]);
          LLAP x;
          cout<<x.llap(arr,n);
          getch();
          return 0;
          }
