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
void Insert_Pos(Node** current,int pos,int data)
{
    if(pos<1 || pos>5)
    cout<<"Invalid position !"<<endl;
    else
    {
        while (pos--)
        {
            if (pos==0)
            {
                Node* temp = getNode(data);

                temp->next = start;
                start->data=
                //return temp;
            }
            else
            {
                current=&(*current)->next;
            }
        }
    }
}

// Node* Insert_Pos(Node* current,int pos,int data)
// {
//     if(pos<1 || pos>5)
//     cout<<"Invalid position !"<<endl;
//     else
//     {
//         while (pos--)
//         {
//             if (pos==0)
//             {
//                 Node* temp = getNode(data);
//                 temp->next = current;
//                 temp=current;
//                 return temp;
//             }
//             else
//             {
//                 current=current->next;
//             }
//         }
//     }
// }

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

   // char c='Y';
    // while(c=='y' || c=='Y')
    // {
    //     system("cls");
    //     cout<<"Enter Information: ";
    //     cin>>data;
    //     newptr=Create_node(data);
    //     if(newptr!=NULL)
    //     {
    //         cout<<"Node Created succesfully\n";      
    //     }
    //     else
    //     {
    //         cout<<"Can't create Node\n";
    //         exit(1);
    //     }
    //     Insert(newptr);
        
         cout<<"Now the list is: \n";
         Display(start);

        data = 2, pos = 3;
        Insert_Pos(&start, pos, data);
        cout << "Linked list after insertion of 1 at position 1: \n";
        Display(start);
   
    return 0;
} 