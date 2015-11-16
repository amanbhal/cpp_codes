using namespace std;
#include<iostream>
#include<conio.h>

struct node
{
    struct node *next;
    int val;   
       };
       
class ADD
{
   public:
          struct node* create()
          {
             int a,r;
             cout<<"enter the number: ";
             cin>>a;
             r=a%10;
             a=a/10;      
             struct node *new_node=(struct node*)malloc(sizeof(struct node));
             new_node->val=r;
             new_node->next=NULL;
             struct node *head;
             head=new_node;
             struct node *prev;
             prev=new_node;    
             while(a>0)
             {
                 r=a%10;
                 a=a/10;      
                 struct node *new_node=(struct node*)malloc(sizeof(struct node));
                 new_node->val=r;
                 new_node->next=NULL;
                 prev->next=new_node;
                 prev=new_node;      
                       }
              return head;         
              }
          
          
          struct node* add(struct node *head1,struct node *head2)
          {
                 int r=0;   //initialise carry r=0
                 struct node *curr1;
                 curr1=head1;
                 struct node *curr2;
                 curr2=head2;
                 struct node *prev;
                 struct node *head;
                 if(curr1!=NULL && curr2!=NULL)
                 {
                      struct node *new_node=(struct node*)malloc(sizeof(struct node));
                      new_node->val=(curr1->val + curr2->val + r)%10;
                      r=(curr1->val + curr2->val + r)/10;
                      new_node->next=NULL;
                      head=new_node;          
                      prev=new_node;
                                }
                 while(curr1!=NULL || curr2!=NULL)
                 {
                     struct node *new_node=(struct node*)malloc(sizeof(struct node));
                     prev->next=new_node;
                     new_node->val=(curr1->val + curr2->val + r)%10;
                     r=(curr1->val + curr2->val + r)/10;
                     new_node->next=NULL;           
                     prev=new_node;
                     curr1=curr1->next;
                     curr2=curr2->next;          
                                }
                 
                 if(curr1==NULL && r==1)
                     {
                         prev->next=curr2;
                         while(prev!=NULL)
                         prev=prev->next;
                         while(curr2!=NULL)
                         {
                               int store=curr2->val;
                               curr2->val=(curr2->val + r)%10;
                               r=(store+r)/10;
                               curr2=curr2->next;            
                                           }
                         }
                  if(curr1==NULL && r==0)
                   {
                         prev->next=curr2;
                         while(prev!=NULL)
                         prev=prev->next;
                                         }                  
                         
                 if(curr2==NULL && r==0)
                     {
                     prev->next=curr1; 
                     while(prev!=NULL)
                         prev=prev->next;
                         }
                 if(curr2==NULL && r==1)                  
                 {
                         prev->next=curr1;
                         while(prev!=NULL)
                         prev=prev->next;
                         while(curr1!=NULL)
                         {
                               int store=curr1->val;            
                               curr1->val=(curr1->val + r)%10;
                               r=(store+r)/10;
                               curr1=curr1->next;            
                                           }
                                           }
                  if(r==1)
                  {
                          struct node* new_node=(struct node* )malloc(sizeof(struct node));
                          prev->next=new_node;
                          new_node->next=NULL;
                          new_node->val=r;
                          }                 
                                           
                 return head;
                 }
                 
             void print(struct node *head)
             {
                struct node *print=head;
                cout<<endl<<endl;
                while(print!=NULL)
                {
                      cout<<print->val<<"\t";
                      print=print->next;                     
                                           }  
                 cout<<endl<<endl; 
                  }       
      };       
      
      
    int main()
    {
      struct node *num1;
      ADD z;
      num1=z.create();
      z.print(num1);
      struct node *num2;
      num2=z.create();
      z.print(num2);
      struct node *result;
      result=z.add(num1,num2);
      z.print(result);
      getch();
      return 0;  
        }  
