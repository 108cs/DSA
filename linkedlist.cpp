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
    node* head=NULL;
    int n,rev=0;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    insertAttail(head,5);
    insertAthead(head,6);
    int counte=0,counto=0;
    node* temp=head;
display(head);
    while(temp!=NULL){
        if(temp->data%2==0)
        counte++;
        else
        counto++;
        temp=temp->next;
    }
    int arre[counte],arro[counto];
    temp=head;
    int e=0,o=0;
    while(temp!=NULL){
        if(temp->data%2==0){
        arre[e]=temp->data;
        e++;
        }else{
        arro[o]=temp->data;
        o++;
        }
        temp=temp->next;
    }
    temp=head;
    int i=0;
    while(i<counte){
       temp->data=arre[i];
       temp=temp->next;
       i++;
    }
     
    i=0;
     while(i<counto){
       temp->data=arro[i];
       temp=temp->next;
       i++;
    }
    display(head);
    return 0;
}