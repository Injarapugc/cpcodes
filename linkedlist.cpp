#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *Next;
    node (int x)
    {
        data=x;
        Next=NULL;
    }
    node *insertion(node *head,int data)
    {
        node *temp=ele;
        if(head==NULL)head=data;
        else head->Next=data;
        
    }
    

};

int main()
{
    node *head=new node(5);
    node *t1=new node(6);
    head->Next=t1;
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->Next;
    }


}