using namespace std;
#include<iostream>
#include<conio.h>

class LIS
{
   public:
          int lis(int arr[],int n)
          {
             int i,count=0;
             int rec[n];
             rec[0]=arr[0];
             for(i=1;i<=n;i++)
             {
                    if(arr[i]>rec[count])
                    {
                         count++;
                         rec[count]=arr[i];                
                                         } 
                                                
                             }
              for(i=0;i<count;i++)
                     cout<<rec[i]<<"\t";         
              return count;
              }   
      };
      
      int main()
      {
          int arr[]={ 10, 22, 9, 33, 21, 50, 41, 60 };
          int n=sizeof(arr)/sizeof(arr[0]);
          LIS x;
          cout<<endl<<x.lis(arr,n);
          getch();
          return 0;
          }
