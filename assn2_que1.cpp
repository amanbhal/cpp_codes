#include<stdio.h>
#include<conio.h>
#include<string.h>


int main()
{
   char arr1[10],arr2[300],a;
   int i,j,k,l,m,ini_count,count=0;
   
   //getting the initial string
   printf("enter the initial string\n");
   scanf("%s",&arr1);
   
   //making final required string
   l=strlen(arr1);
   for(i=0;i<l;i=i+2)
   {
          a=arr1[i];
          k=arr1[i+1];
          ini_count=count;
          count=count+k;
          for(m=ini_count;m<count;m++)
          arr2[m]=a;                     
                          }   
   
   printf("%s",arr2);
   l=strlen(arr2);
   printf("\n%d\n",l);
   getch();
   return 0;

}
