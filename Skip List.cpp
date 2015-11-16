using namespace std;
#include<iostream>
#include<conio.h>
#include<math.h>

struct node
{
    struct node * forwrd;
    int value;   
       };
   
struct e_node
{
    struct node *below;
    struct e_node *frwd;
    int val;   
       };       

class SL
{
   public:
          void create()
          {
             //creating linked list
                              
             int n;
             cout<<"enter number of nodes to be inserted:"<<endl;
             cin>>n;
                          
             struct node* new_node = (struct node*) malloc(sizeof(struct node));
             cout<<endl<<"enter the node value: ";
             cin>>new_node->value;
             new_node->forwrd=NULL;
             struct node *prev=new_node;
             struct node *head=new_node;
             
             struct e_node *frst;
             frst->val=head->value;
             frst->below=head;
             int e_n=(n/(int)sqrt(n))+1;
             int division=n/e_n;
             int count=1,prev_count=1;
             int e_count=1;
             struct e_node* e_prev=frst;
             for(int i=1;i<n;i++)
             { 
             struct node* new_node = (struct node*) malloc(sizeof(struct node));
             cout<<endl<<"enter the node value: ";
             cin>>new_node->value;
             new_node->forwrd=NULL;
             prev->forwrd=new_node;
             prev=new_node;
             count++;
             if((count-prev_count)-1==division && e_count<e_n)
             {
                   struct e_node* new_e_node = (struct e_node*) malloc(sizeof(struct e_node));
                   new_e_node->val=new_node->value;
                   new_e_node->below=new_node;
                   new_e_node->frwd=NULL;
                   e_prev=new_e_node;
                   prev_count=count;
                   e_count++;                        
                                           }
                    }
                    
             struct node *end=prev;       
             
             print_list(head);    
             
             struct e_node *last;
             e_prev->frwd=last;
             last->val=end->value;
             last->below=end;
             last->frwd=NULL;
             
             print_list(frst);
  
             
                        }
             
             void print_list(struct node *head)
             {
                struct node *print=head;
                cout<<endl<<endl;
                while(print!=NULL)
                {
                      cout<<print->value<<"\t";
                      print=print->forwrd;                     
                                           }  
                  }
     
                  void print_list(struct e_node *frst)
                  {
                       struct e_node *print=frst;
                       cout<<endl<<endl;
                       while(print!=NULL)
                       {
                           cout<<print->val<<"\t";
                           print=print->frwd;                     
                                           }  
                  }

      }; 
      
      int main()
      {
        SL z;
        z.create();
        getch();
        return 0;  
          }
