#include<stdio.h>
#include<stdlib.h>
typedef struct nodesss{
    int data;
    struct nodesss* next;
}node;

node* createnode(int newelement)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->data=newelement;
    temp->next=temp;
    return temp;
}
node* insertbeg(node* head, int data)
{
	node* curr=head;
    node * temp=createnode(data);
    temp->next=head;
    
    do
    {
    	
        curr=curr->next;
        
        
    }while(curr->next!=head);
    curr->next=temp;
    head=temp;
    
}
node* insertatend(node * head,int data)
{
	
	node*current=head;
    
    node* temp=createnode(data);
    while(current->next!=head){
    	current=current->next;
	}
    
        current->next=temp;
        temp->next=head;
        
    
    
   
}
void display(node* head)
{
    node* pr=head;

    do
    {
        printf(" %d->\t",pr->data);
        pr=pr->next;

    }while(pr->next!=head);
     printf(" %d->\t",pr->data);
}
int main()
    {
        int choice,num;
        node* head;
        int first;
        head=(node*)malloc(sizeof(node));
        printf("Enter the data for the head Node: ");
        scanf("%d",&first);
        head->data=first;
        head->next=head;
        
        do
        {
            printf("\n\nPRESS 1 FOR INSERT AT BEGGINING \n PRESS  FOR INSERT AT END \n PRESS 3  FOR DISPLAY\n PRESS 0 TO EXIT \n\nEnter your choice: ");

            scanf("%d",&choice);
        
        switch(choice)
        {
        	
            case 1:
            printf("Enter the data for first = ");
            scanf("%d",&num);
            head=insertbeg(head,num);
            break;

            case 2:
         	printf("Enter the data for end insertion= ");
            scanf("%d",&num);
            insertatend(head,num);
            break;
            
            case 3:
            printf("Elements are=\n");
            display(head);
            break;
            
            case 0:
            exit(1);

        }
    }while(choice!=0);
    
}