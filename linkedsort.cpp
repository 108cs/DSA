#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAthead(node* &head,int val){
    node *n=new node(val);
    n->next=head;
    head=n;
}
void insertAttail(node* &head,int val){
    node *n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
     node* temp=head;
     while(temp!=NULL){
         cout<<temp->data<<"->";
         temp=temp->next;
     }
     cout<<"NULL"<<endl;
}


void headdelete(node* &head){
   node* todelete=head;
   head=head->next;
   delete todelete;
}

int main(){
    node* head=NULL;
    
    insertAttail(head,3);
    insertAttail(head,2);
    insertAttail(head,1);
    insertAttail(head,6);
    insertAttail(head,5);
    insertAthead(head,4);

   node* temp=head;

    display(head);
    
    while(temp!=NULL){
        node* temp2=head;
        while(temp2!=NULL){
           if(temp->data<temp2->data){
            int x=temp->data;
            temp->data=temp2->data;
            temp2->data=x;
           }
           temp2=temp2->next;
        }
        temp=temp->next;
    }

   display(head);
    return 0;
}