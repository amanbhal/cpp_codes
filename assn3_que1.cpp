#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k,l,review[100],final_rev[34];
    char choice;
    
    //creating pre-existing review list
    for(i=0;i<10;i++)
    review[i]=(i+1);
    
    //updating reviews
    printf("any new reviews to be added?\nY or N\n");
    scanf("%c",&choice);
    
    if(choice=='Y')
    {
          printf("enter the number of new reviews to be added\n");
          scanf("%d",&j);
          printf("enter the reviews\n");
          for(i=10;i<(10+j);i++)
          scanf("%d",&review[i]);
                  
                   }

    else
    {
        j=0;
        }   
        
    //sorting the string
    
    for(i=1;i<(10+j);i++)
     {
           k=i;
           while(k>0 && review[k]>review[k-1])
           {
               l=review[k];
               review[k]=review[k-1];
               review[k-1]=l;
               k--;      
                     }              
                         }
                         
     //getting top n/3 reviews
     
     k=(10+j)/3;
     for(i=0;i<k;i++)
     final_rev[i]=review[i];
     
     printf("minimum rating is %d\n",final_rev[k-1]);
                                     
                                 
    
    
 getch();
 return 0;   
}
