using namespace std;
#include<iostream>
#include<conio.h>


class LSCS
{
      public:
             int lscs(int arr[],int n)
             {
                int max_so_far=arr[0],curr_max=arr[0],i;
                
                for(i=1;i<n;i++)
                {
                       curr_max=max(arr[i],curr_max+arr[i]);
                       max_so_far=max(max_so_far,curr_max);         
                                }
                 return max_so_far;
                 }
                 int max(int a,int b)
                 {
                     return (a>b) ? a : b;
                     }
                 
      };
      
      int main()
      {
          int arr[]={-2,-3,4,-1,-2,1,5,-3};
          int n=sizeof(arr)/sizeof(arr[0]);
          LSCS a;
          cout<<a.lscs(arr,n);
          getch();
          return 0;
          }
