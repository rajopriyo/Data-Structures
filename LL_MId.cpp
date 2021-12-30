#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    
}*start,*newptr,*save,*ptr;

Node* getNode(int n)
{
    ptr =new Node;
    ptr->data=n;
    ptr->next=NULL;
}

int AtMid(Node* head)
{
    Node *hare,*tortoise;

    hare=tortoise=head;
    
    while(hare!=NULL && hare->next!=NULL)
    {
        hare=hare->next->next;
        tortoise=tortoise->next;
    }

    //cout<<(*tortoise);
    return tortoise->data;
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
    

    int data,pos;

    Node* start = NULL;
    start = getNode(3);
    start->next = getNode(5);
    start->next->next = getNode(8);
    start->next->next->next = getNode(10);
    start->next->next->next->next = getNode(11);
   
         cout<<"Now the list is: \n";
         Display(start);

      
        //Insert_Pos(&start, pos, data);
        cout<< AtMid(start);
   
    return 0;
} 