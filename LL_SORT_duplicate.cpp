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
void sort_duplicate(Node* head)
{
    Node *current,*next_next;
    current=head;

    while(current->next!=NULL)
    {
        if (current->data == current->next->data)
        {
            next_next=current->next->next;
            free(current->next);
            current->next=next_next;
        }
        else
        {
            current=current->next;
        }

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
    

    int data,x,n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>data;
        newptr=getNode(data);
        Insert(newptr);   
    }
   
         cout<<"Now the list is: \n";
         Display(start);

        
      
    cout<<"New list:"<<endl;
        sort_duplicate(start);
         Display(start);

    
  
   
    return 0;
} 