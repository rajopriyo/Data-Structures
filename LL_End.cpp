#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    
}*head,*rear,*newptr,*ptr;

Node* Create_node(int n)
{
    ptr =new Node;
    ptr->data=n;
    ptr->next=NULL;
}

void Insert(Node *np)
{
    if( head == NULL)
    {
        head= rear = np;
    }
    else
    {
        rear->next=np;
        rear=np;
    }
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
    int data;
    //head=rear=NULL;

    char c='Y';

    while(c=='Y' || c=='y')
    {
        cin>>data;

        newptr=Create_node(data);

     
        Insert(newptr);

        Display(head);   

        cout<<"Press y to continue: ";
        cin>>c;

       
        
    }
    
}
