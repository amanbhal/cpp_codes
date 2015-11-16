#include<stdio.h>
#include<conio.h>
int main()
{
    int a[] = {2,2,2,3,3,3,3,3,4,4,5,5,6};
    int size = 13,search = 5;
    
    int low = 0;
    int high = size-1,mid;
    while(low <= high)
    {
       mid = (low+high)/2;
       if(a[mid] < search)
       {
           low = mid +1;   
       }
       else if(a[mid] > search)
       {
            high = mid -1;
       }       
       else
       {
        
        high = mid - 1;
                     //   printf("%d  %d\n",low,high);
       }
    }
    printf("%d",mid);
getch();
return 0;    
}
