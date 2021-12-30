#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    
}*start,*rear,*newptr,*save,*ptr;

Node* Create_node(int n)
{
    ptr =new Node;
    ptr->data=n;
    ptr->next=NULL;
}

void Insert(Node *np)
{
    if(start == NULL)
    {
        start=rear =np;
    }
    else
    {
        rear->next=np;
        rear=np;
        
    }
}
void Traverse(Node* np)
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

    while(c=='y' || c=='Y')
    {
        system("cls");
        cout<<"Enter Information: ";
        cin>>data;
        

        newptr=Create_node(data);
        if(newptr!=NULL)
        {
            cout<<"Node Created succesfully\n";
            
        }
        else
        {
            cout<<"Can't create Node\n";
            exit(1);
        }

        Insert(newptr);
        
       

        cout<<"Press Y to continue & N to exit ...\n";
        cin>>c;
    }
      cout<<"Now the list is: \n";
      Traverse(start);

   
    return 0;
} 

