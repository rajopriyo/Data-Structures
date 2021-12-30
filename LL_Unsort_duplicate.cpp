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
void unsort_duplicate(Node** head)
{
     Node *current,*next_next;
    current=*head;

   
    
     for(int i=0;i<=100;i++)
        {
            arr[i]=0;
        }

     arr[current->data]=1;
    while(current->next!=NULL)
    {


     for(int i=0;i<100;i++)
     {   
        if (current->next->data==i)
        {
            arr[i]++;
        }
     }
    
    if (arr[current->next->data] > 1)
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
        unsort_duplicate(&start);
         Display(start);

    // for(int i=0;i<10;i++)
    // {
    //     cout<<arr[i]<<"->";
    // }
  
   
    return 0;
} 