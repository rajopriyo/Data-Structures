#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    
}Node;

Node *start,*newptr,*save,*rear,*newptr;



Node* getNode(int n)
{
    Node* ptr;

    ptr=(Node*)malloc(sizeof(Node));

    ptr->data=n;
    ptr->next=NULL;
}

void Insert_at_Beg(Node *np)
{
    if(start == NULL)
    {
        start =np;
    }
    else
    {
        save=start;
        start=np;
        np->next=save;
    }
}
void Insert_at_End(int data)


{
    Node* ptr=(Node*)malloc(sizeof(Node));
    Node* temp=start;

    ptr->data=data;

    if( start == NULL)
    {
        ptr->next=NULL;
        start=ptr;

    }
    else
    {
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
        temp->next=ptr;
        ptr->next=NULL;
    
    }
}

void Insert_Pos(int pos,int data)
{
   
        Node* temp = getNode(data);
        temp=(Node*)malloc(sizeof(Node));
        temp->data=data;

        Node* current=start;
       
        if (pos==1)
            {
                

                temp->next = current;
                start=temp;
                
            }
        else
        {
            for(int i=1;i<pos-1;i++)
            {
                current=current->next;
            }
            temp->next=current->next;
            current->next=temp;
        }

}




void Del_Node(Node* current,int pos)
{
    Node* ptr=current;

    if(start==NULL)
    {
        printf("Underflow");
    }
    if(pos==1)
    {
        start=ptr->next;
        free(ptr);
    }
    else
    {
    for(int i=1;ptr!=NULL &&i<pos-1;i++)
    {
        ptr=ptr->next;
    }

    Node* next=ptr->next->next;
    free(ptr->next);
    ptr->next=next;
    }

}
Node* rev(Node* head)
{
    Node *curr=head;
    Node *prev=NULL;
    Node* next=NULL;
    while (curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;
    
}
void Display(Node* np)
{
    while(np!=NULL)
    {
        printf("%d->",np->data);
        np=np->next;
    }
    printf("!!\n");
}

int main()
{
    

    start=(Node*)malloc(sizeof(Node));
    newptr=(Node*)malloc(sizeof(Node));    

    int data,x,pos;
    int c=-1;



    printf("Enter head element of the linked list: ");
    scanf("%d" ,&data);

    start=getNode(data);

    printf("\n_____Choice______\n\n1. Insert at Begining\n2. Insert at End\n3. Insert at any Position\nDelete at any Position\n0.Exit\n\n______****_______\n\n");

  

    while(c!=0)
    {
          printf("Enter Your choice: ");
        scanf("%d",&c);

        switch (c)
        {
        case 1:
              {
                printf("Enter data: ");
                scanf("%d",&data);
                newptr=getNode(data);
                Insert_at_Beg(newptr);
                Display(start);
                break;
              }
        case 2:
              {
                printf("Enter data: ");
                scanf("%d",&data);
                newptr=getNode(data);
                Insert_at_End(data);
                Display(start);
                break;
              }
        case 3:
              {  printf("Enter the Postion: ");
                scanf("%d",&pos);
                printf("Enter data: ");
                scanf("%d",&data);
                newptr=getNode(data);
                Insert_Pos(pos,data);
                Display(start);
                break;
              } 
        case 4:
              {
                printf("Enter the Postion: ");
                scanf("%d",&pos);
                Del_Node(start,pos);
                Display(start);
                break;
              }
        case 0:
              {
                exit(0);
                break;
              }
        default:
               {
                printf("\nInvalid Choice:");
                break;
               }
        }
    }

   
    return 0;
} 

