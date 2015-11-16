using namespace std;
#include<conio.h>
#include<iostream>

struct node
{
   struct node* next;
   int val;    
       };

class MERGE
{
   public:
           struct node* create()
           {
               int n;
               cout<<"enter the number of nodes to be inserted:  ";
               cin>>n;
               
               struct node* new_node=(struct node*)malloc(sizeof(struct node));
               struct node* head;
               struct node* prev;
               head=new_node;
               prev=new_node;
               new_node->next=NULL;
               cout<<"enter value in node 1:  ";
               cin>>new_node->val;
               
               for(int i=1;i<n;i++)
               {
                   struct node* new_node=(struct node*)malloc(sizeof(struct node));
                   prev->next=new_node;
                   new_node->next=NULL;
                   cout<<"enter value in node "<<i+1<<":  ";
                   cin>>new_node->val;    
                   prev=new_node;
                       }
                       
                return head;          
                  }  
                  
              void print(struct node* head)
              {
                 cout<<endl<<endl;
                 struct node *pr=head;
                 while(pr!=NULL)
                 {
                       cout<<pr->val<<"\t";;
                       pr=pr->next;           
                                  }  
                   }    
 
             void sort(struct node** head)
             {
                 struct node* headref= *head;
                 struct node* a;
                 struct node* b;
                 
                 //base case
                 if(headref==NULL || headref->next==NULL)
                  return;
                  
                 partition(headref,&a,&b);
                 
                 sort(&a);
                 sort(&b);
                 
                 *head=merge(a,b);    
                    }      
                    
             void partition(struct node* head,struct node** a,struct node** b)
             {
                struct node* slow;
                struct node* fast;
                
                if(head==NULL || head->next==NULL)
                {
                     *a=head;
                     *b=NULL;         
                              }
                
                slow=head;
                fast=head->next;
                
                while(fast!=NULL)
                {
                     fast=fast->next;
                     while(fast!=NULL)
                     {
                           slow=slow->next;
                           fast=fast->next;           
                                      }            
                                 }                
                  *a=head;
                  *b=slow->next;
                  slow->next=NULL;
                  }       
                  
               struct node* merge(struct node* a,struct node* b)
               {
                   struct node* result=NULL;
                   
                   if(a==NULL)
                   return b;
                   if(b==NULL)
                   return a;
                   
                   if(a->val < b->val)
                   {
                        result=a;
                        result->next=merge(a->next,b);     
                             }
                   else
                   {
                      result=b;
                      result->next=merge(a,b->next); 
                       }           
                       
                    return result;    
                      }   
                  
      };
      
      
      int main()
      {
        MERGE z;
        struct node* head;
        head=z.create();
        z.print(head);
        z.sort(&head);
        z.print(head);
        getch();
        return 0;  
          }
