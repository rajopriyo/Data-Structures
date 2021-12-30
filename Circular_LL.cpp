#include <bits/stdc++.h>
using namespace std;

#define MAX 10000
int arr[MAX];

struct Node
{
    int data;
    Node *next;
    
}*start,*rear,*newptr,*save,*ptr;
void Display(Node* np);
Node* getNode(int n)
{
    ptr =new Node;
    ptr->data=n;
    ptr->next=NULL;
}
void Insert(Node *np)
{
    if(start == NULL)
    {
        start = rear = np;
    }
    else
    {
        rear->next=np;
        rear=np;
    }
}
void Insert_at_head(Node *head,int x)
{
   
    Node *ptr=head;;
    Node* n=getNode(x);
    

    if(head==NULL)
    {
        head=n;
        head->next=n;
     
    }

    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }

    ptr->next=n;
    n->next=head;
    head=n;
}

void Insert_at_tail(Node *head,int x)
{
    Node *ptr,*n;
    ptr=head;

    if(start==NULL)
    {
    while(ptr->next!=start)
    {
        ptr=ptr->next;
    }
    
    ptr->next=n;
    n->next=start;
    }
}
void Display(Node* head)
{
   
    Node* ptr;
    ptr=head;
    do
    {
        cout<<ptr->data<<"->";
        ptr=ptr->next;

    } while (ptr!=start);

    cout<<"!!" ;
}

int main()
{
    
    start=NULL;

    // int data,ch=-1,x,n;


    //     cin>>data;
    //     start=getNode(data);


   
   
    //      cout<<"Now the list is: \n";
    //      Display(start);

    // cout<<"\n1.Insert at Head";
    // cout<<"\n2.Insert at tail";
    // cout<<"\n3.Display";
    // cout<<"\n0.Exit\n\n";
         
    // while(ch!=0)
    // {   
    // cout<<"Enter your choice: ";
    // cin>>ch; 
    // switch(ch)
    // {
    //     case 1:
    //           {
    //               cin>>x;
    //               Insert_at_head(start,x);
    //               break;
    //           }
    //     case 2:
    //           {
    //               cin>>x;
    //               Insert_at_tail(start,x);
    //               break;
    //           }
    //     case 3:
    //           {
    //               Display(start);
    //               break;
    //           }
    //     case 0:
    //           {
    //               exit(0);
    //               break;
    //           }
    //     default:
    //           {
    //               cout<<"Invalid Choice";
    //               break;
    //           }
    // }
      
    // }

Insert_at_head(start,10);
Insert_at_head(start,20);
Insert_at_head(start,30);
Insert_at_head(start,40);
   
Display(start);

    return 0;
} 