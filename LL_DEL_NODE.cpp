#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    
}*start,*rear,*newptr,*ptr,*save;

Node* Create_node(int n)
{
    ptr =new Node;
    ptr->data=n;
    ptr->next=NULL;
}

void Insert(Node *np)
{
    if( start == NULL)
    {
        start= rear = np;
    }
    else
    {
        save=start;
        start=np;
        np->next=save;
    }
}
void Del_Node()
{
    if(start==NULL)
    {
        cout<<"UNDERFLOW";
    }
    else
    {
        ptr=start;
        start=start->next;
        delete ptr;
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
    
    char c='Y';

    while(c=='Y' || c=='y')
    {
        cin>>data;

        newptr=Create_node(data);

     

        Insert(newptr);

        cout<<"Press y to continue: ";
        cin>>c;

        
    }

    do
    {
        Display(start);   

        cout<<"Press y to delete : ";
        cin>>c;

        if(c=='Y' || c=='y')
        {
            Del_Node();

        }
    }while(c=='Y' || c=='y');
       
}