#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    char data;
    node *next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAthead(node* &head,char val){
    node *n=new node(val);
    n->next=head;
    head=n;
}
void insertAttail(node* &head,char val){
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
node* reverselist(node* &head){
  node *previous=NULL;
  node *current=head;
  node *nxt;
  
  while(1){
  nxt=current->next;
  current->next=previous;
  previous=current;
  current=nxt;
  if(current==NULL){
      
      break;
  }
  
  }
  return previous;
  
}
int main(){
    node* head1=NULL;
    
    insertAttail(head1,'X');
    insertAttail(head1,'Z');
    insertAttail(head1,'A');
    insertAttail(head1,'V');
    insertAttail(head1,'B');
    insertAthead(head1,'S');
    node* head2=NULL;
    
    insertAttail(head2,'X');
    insertAttail(head2,'Z');
    insertAttail(head2,'A');
    insertAttail(head2,'V');
    insertAttail(head2,'B');
    insertAthead(head2,'S');
     node* x=reverselist(head2);
   node* temp1=head1;
node* temp2=x;
    display(head1);
    display(x);
    int flag=0;

    while(temp1!=NULL){
        if(temp1->data!=temp2->data){
            flag=1;
            break;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(flag==1)
    cout<<"Not a palindrome"<<endl;
    else
    cout<<"It is a palindrome"<<endl;

   
    return 0;
}