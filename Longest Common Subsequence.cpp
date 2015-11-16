using namespace std;
#include<iostream>
#include<conio.h>

class LCS
{
    public:
           int lcs(char *arr1,char *arr2,int n1, int n2)
           {
              int L[n1+1][n2+1];
              int i,j;
              
              for(i=0;i<=n1;i++)
              {
                   for(j=0;j<=n2;j++)
                   {
                       if(i==0 || j==0)
                       L[i][j]=0;
                       
                       else if(arr1[i-1]==arr2[j-1])
                       L[i][j]=L[i-1][j-1]+1;
                       
                       else
                       L[i][j]=max(L[i-1][j],L[i][j-1]);             
                                    }            
                               }   
               return L[n1][n2];
                 }  
      };
      
      
      int main()
      {
          char arr1[]="abcdefgh";
          char arr2[]="xbydlfgi";
          int n1=strlen(arr1);
          int n2=strlen(arr2);
          LCS x;
          cout<<x.lcs(arr1,arr2,n1,n2);
          getch();
          return 0;
          }
