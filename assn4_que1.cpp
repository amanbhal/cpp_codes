#include<stdio.h>
#include<conio.h>

int cool_numbr(int ,int ,char);

int main()
{
 int a,i,j,k,l,u;
 
 printf("enter an integer\n");
 scanf("%d",&a);

     i=a%10;
     l=a-i;
     u=a+(10-i);
char ch;
 ch='l';
 j=cool_numbr(l,a,ch);
 ch='u';
 k=cool_numbr(a,u,ch);
 
 printf("\nLC(%d)=%d\n",a,j);
 printf("\nUC(%d)=%d\n",a,k);   
  getch();
  return 0;         
    
}

int cool_numbr(int low, int high, char ch)
{
    int i,j,k[20],l,m,n,o,p,q,num[11],sum=0,z;
 for(i=low;i<=high;i++)
 {   
j=0;
 while(i>0)
 {
     k[j]=i%10;
     i=i/10;
     j++;      
           }
           
           
  for(l=0;l<j;l++)
  {
         sum=sum+k[l];
                               }
                               
   int s[500];
  for(l=0;l<j;l++)
  s[l]=k[l];
  m=((j)*(j-2))/2;
  l=j;
       for(n=0;n<j-1;n++)
       {
             for(o=n+1;0<j;o++)
             {
                   s[l]=k[n]+k[o];
                   l++;            
                               }            
                         }           
                         
  l=j+m;
 // m=((j)*(j-1)*(j-2))/6;
  for(n=0;n<j-2;n++)
  {
       for(o=n+1;o<j-1;o++)
       {
             for(p=n+2;p<j;p++)
             {
                    s[l]=k[n]+k[o]+k[p];
                    l++;           
                               }              
                           }             
                    }
                   

 for(n=0;n<l;n++)
 {
                 z=((sum-s[n])*s[n])%i;
       if((z==0))          
    {
                num[q]=i;                             
                q++;
                break;   
                           }                  
                           
        }
        
} 

if(ch=='l')
    return (num[q]);       
 else
     return (num[0]);          
}                                       
