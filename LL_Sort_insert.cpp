#include <bits/stdc++.h>
using namespace std;
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

void sort_Insert(Node* head,int x)
{
    Node* newp=getNode(x);
    Node* t;
    if (head==NULL || x<head->data)
    {
        newp->next=head;
        head=newp;

        
    }
    else
    {
    t=head;
    while(t->next!=NULL && t->next->data<x) 
    {
        t=t->next;
    }
    newp->next=t->next;
    t->next=newp;
    }

    Display(head);
}
void Display(Node* np)
{
   
    while(np!=NULL)
    {
        cout<<np->data<<"->";
        np=np->next;
    }
    cout<<"!!\n";

}

int main()
{
    

    int data,x,n;
    cin>>n;

    for (int i = 0; i < 5; i++)
    {
        cin>>data;
        newptr=getNode(data);
        Insert(newptr);   
    }
   
         cout<<"Now the list is: \n";
         Display(start);

        scanf("%d",&x);

        // data = 2, pos = 3;
        // Insert_Pos(&start, pos, data);
      
    cout<<"New list:"<<endl;
        sort_Insert(start,x);

    
  
   
    return 0;
} 