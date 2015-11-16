using namespace std;
#include<iostream>
#include<conio.h>

struct node
{
   struct node* next;
   int data;    
       };

class LOOP
{
   public:
          void remove_loop(sruct node* head, struct node* loop_node);
          int detectLoop(struct node *head)
          {
              struct node* slow, *fast;
              slow=head;
              fast=head;
              while(slow && fast && fast->next)
              {
                  slow=slow->next;
                  fast=fast->next->next;
                  if(slow==fast)
                  {
                       removeLoop(head,slow); 
                       return 1;         
                                }       
                         }
              return 0;            
              }   
            
            void remove_loop(sruct node* head, struct node* loop_node)
            {
                struct node* ptr1, *ptr2;
                ptr1=head;
                while(1)
                {
                    ptr2=loop_node;
                    while(ptr2->next != ptr1 && ptr2->next != loop_node)
                           ptr2=ptr2->next;
                    
                    if(ptr2->next == ptr1)
                    break;
                    
                    else 
                    ptr1=ptr1->next;       
                        }
                   ptr2->next=NULL;       
                   }  
                   
            void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node =
        (struct node*) malloc(sizeof(struct node));
 
    /* put in the data  */
    new_node->data  = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}


void printList(struct node *node)
{
    while(node != NULL)
    {
        printf("%d  ", node->data);
        node = node->next;
    }
}
};

int main()
{
    /* Start with the empty list */
    struct node* head = NULL;
    LOOP z;
    z.push(&head, 10);
    z.push(&head, 4);
    z.push(&head, 15);
    z.push(&head, 20);
    z.push(&head, 50);
 
    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next;
 
 
    z.printList(head);
 
    getchar();
    return 0;
}       
