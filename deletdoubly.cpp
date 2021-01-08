#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int data;
        node* next;
        node* prev;
};
void push(node** head_ref,int data)
{
    node* new_node=new node();
    new_node->data=data;

    new_node->next=*head_ref;
    new_node->prev=NULL;

    if(*head_ref!=NULL)
    {
        new_node->prev=new_node;
    }
    *head_ref=new_node;
}
/*
void push(node** head_ref,int new_data)
{
    node *new_node=new node();
    new_node->data=new_data;
    new_node->next=*head_ref;
    new_node->prev=NULL;
    //if 1 2 is list and push 3 then 3 1 2 so
    if(*head_ref !=NULL)
        new_node->prev=new_node;

    *head_ref=new_node;
}
*/

void delet(node** head_ref,node* del)
{
 //base case
 if(*head_ref==NULL || del==NULL)
 {
     return;
 }
 //first node
 if(*head_ref==del)
 {
     *head_ref=del->next;
 }

 if(del->prev!=NULL)
 {
    del->next->prev=del->prev;
   
 }
 if(del->next!=NULL)
 {
     del->prev->next=del->next;
 }
 free(del);
 return;
}





void printlist(node* head_ref)
{
while(head_ref!=NULL)
{
   // cout<<head_ref->prev<<" "<<head_ref->data<<" "<<head_ref->next<<endl;
    cout<<" "<<head_ref->data;
    head_ref=head_ref->next;
}
cout<<endl;
}
int main()
{
    node* head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);
    printlist(head);
    
    //delet(&head,head);
    //printlist(head);

    delet(&head,head->next);
    printlist(head);
return 0;
}    
