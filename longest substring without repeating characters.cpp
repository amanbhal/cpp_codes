using namespace std;
#include<iostream>
#include<conio.h>
#define CHAR 256
class LSWR
{
   public:
          int lswr(char *arr,int n)
          {
             int max_len=1,curr_len=1;
             char visited[CHAR];
             int i;
             int prev_index;
             
             for(i=0;i<CHAR;i++)
             visited[i]=-1;
             
             visited[arr[0]]=0;
             
             for(i=1;i<n;i++)
             {
                   prev_index=visited[arr[i]];
                   
                   if( prev_index==-1 || i-curr_len > prev_index)
                   curr_len++;
                   
                   else
                   {
                       if(curr_len > max_len)
                       max_len=curr_len;
                       
                       curr_len=i-prev_index;
                       }
                    visited[arr[i]]=i;   
              }   
              
              if (curr_len > max_len)
                   max_len = curr_len;
                   
                   
               return max_len;    
} 
      };
      
      
      int main()
      {
          char arr[]="geeksforgeeks";
          int n=strlen(arr);
          LSWR x;
          cout<<x.lswr(arr,n);
          getch();
          return 0;
          }
