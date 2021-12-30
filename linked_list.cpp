#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    
}*start,*newptr,*save,*ptr;

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
        start =np;
    }
    else
    {
        save=start;
        start=np;
        np->next=save;
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
        
         cout<<"Now the list is: \n";
         Display(start);

        cout<<"Press Y to continue & N to exit ...\n";
        cin>>c;
    }

   
    return 0;
} 

