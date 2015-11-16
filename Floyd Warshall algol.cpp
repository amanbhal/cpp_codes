using namespace std;
#include<iostream>
#include<conio.h>
#define V 4
#define INF 99999
class FWA
{
    public:
           void fwa(int arr[][V])
           {
              int S[V][V];
              
              //initialise S matrix as given graph matrix
              for(int i=0;i<V;i++)
              {
                      for(int j=0;j<V;j++)
                      S[i][j]=arr[i][j];
                      }
              
              /* Add all vertices one by one to the set of intermediate vertices.
      ---> Before start of a iteration, we have shortest distances between all
      pairs of vertices such that the shortest distances consider only the
      vertices in set {0, 1, 2, .. k-1} as intermediate vertices.
      ----> After the end of a iteration, vertex no. k is added to the set of
      intermediate vertices and the set becomes {0, 1, 2, .. k} */
      
               for(int i=0;i<V;i++)
               {
                   for(int j=0;j<V;j++)
                   {
                       for(int x=0;x<V;x++)
                          S[i][j]=min(S[i][j],S[i][x]+S[x][j]);    
                           }    
                       }                          
               
                 
               
              for(int i=0;i<V;i++)
              {
                      for(int j=0;j<V;j++)
                      cout<<S[i][j]<<"\t";
                      cout<<endl;
                      } 
                      }
      };
      
      inline
      int min(int a,int b)
      {
         return (a>b) ? b : a; 
          }
          
          
       int main()
{
    /* Let us create the following weighted graph
            10
       (0)------->(3)
        |         /|\
      5 |          |
        |          | 1
       \|/         |
       (1)------->(2)
            3           */
    int arr[V][V] = { {0,   5,  INF, 10},
                        {INF, 0,   3, INF},
                        {INF, INF, 0,   1},
                        {INF, INF, INF, 0}
                      };
 
    // Print the solution
    FWA z;
    z.fwa(arr);
    getch();
    return 0;
}   
