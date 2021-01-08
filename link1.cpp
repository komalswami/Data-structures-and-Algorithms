#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class node
{
    public:
        int data;
        node* next;
};
void printList(node* n)
{
    while (n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}
void insertAtFirst(node** head_ref,int newdata)
{
    //1. allocate node
    node* newnode =new node();

    //2. put in the data 
    newnode->data=newdata;

    //insert as first
    
    //3. make next of new node as head
    newnode->next=(*head_ref);

    //4. move the head to point to the new node
    (*head_ref)=newnode;
}
void insertAfter(node* prev_node,int newdata)
{
    if(prev_node==NULL)
    {
        cout<<"empty";
        return;
    }

    node* newnode=new node();
    newnode->data=newdata;
    
    newnode->next=prev_node->next;
    prev_node->next=newnode;
}
void insertAtLast(node** head_ref,int newdata)
{
    //1. allocate node
    node* newnode=new node();

    //2.allocate data
    newnode->data=newdata;

    newnode->next=NULL;

    node* last=*head_ref;

    while(last!=NULL)
    {
        last=last->next;
    }

    last->next=newnode;
    return;

}
int main()
{
    node* head=NULL;
    node* second=NULL;
    node* third=NULL;

    head=new node();
    second=new node();
    third=new node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    cout<<"\n************************************************"<<endl;
    printList(head);


    cout<<"\n************************************************"<<endl;
    insertAtLast(&head,8);
    printList(head);


    cout<<"\n************************************************"<<endl;
    insertAfter(third->next,9);
    printList(head);


    cout<<"\n************************************************"<<endl;
    insertAtFirst(&head,6);
    printList(head);

    return 0;
}
