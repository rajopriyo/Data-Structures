#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};
  
 struct node* start;

struct node* insertAtTail(struct node* head)
{

    int x;
 

    struct node* n;
    n = (struct node*)malloc(sizeof(struct node));
 

    printf("\nEnter data to be "
           "inserted: \n");
    scanf("%d", &x);
 

    if (start == NULL) {
        n->data = x;
        n->next = n;
        start = n;
        
    }
     else {
        n->data = x;
        n->next = head;


        
     }
}
void Display(struct node* head)
{
   
    struct node* ptr;
    ptr=head;
    do
    {
        printf("%d ->",ptr->data);
        ptr=ptr->next;

    } while (ptr!=head);

    printf("!!");
}

int main()
{

    int data;
   
    start=NULL;
    start=(struct node*)malloc(sizeof(struct node));
    
    start->data=5;
   


    

    insertAtTail(start);
    insertAtTail(start);
    insertAtTail(start);

    Display(start);


}