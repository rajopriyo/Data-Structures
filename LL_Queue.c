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
void Push(Node *np)
{
    if( start == NULL)
    {
        start= rear = np;
    }
    else
    {
        rear->next=np;
        rear=np;
    }
}
void Pop()
{
    Node* ptr=(Node*)malloc(sizeof(Node));

    if(start==NULL)
    {
        printf("UNDERFLOW");
    }
    else
    {
        ptr=start;
        start=start->next;
        free(ptr);
    }
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
    

    start=NULL;
    int data;
    int c=-1;

     printf("\n_____Choice______\n\n1. Push\n2. Pop\n0.Exit\n\n______****_______\n\n");

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
                Push(newptr);
                Display(start);
                break;
              }
        case 2:
              {
                  Pop();
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

