#include<iostream>
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
void deletion(node* &head,int val){
    node* temp=head;
    if(head==NULL)
    return;
    if(head->next==NULL){
        headdelete(head);
        return;
    }

    while(temp->next->data!=val){
        
        temp=temp->next;
    }

    node* todelete=temp->next;
    
    temp->next=temp->next->next;
    delete todelete;
    
}


int main(){
    node* head=NULL;
   
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    insertAttail(head,5);
    insertAthead(head,6);
    int counte=0,counto=0;
    node* temp=head;
display(head);
    deletion(head,4);
    display(head);
    return 0;
}
