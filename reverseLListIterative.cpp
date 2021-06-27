#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* insert(Node* head,int value){
    Node* tmp= new Node();  // (Node*)malloc(sizeof(Node)); in C
    tmp->data=value;
    tmp->next=NULL;
    if(head==NULL){ head=tmp; }
    else{
        Node* tmp1=head;
        while(tmp1->next!=NULL){ tmp1=tmp1->next; }
        tmp1->next=tmp;
    }
    return head;
}

void print(Node* head){
    cout<<"\nList :  ";
    while(head!=NULL){
        cout<<"->"<<head->data<<"\t";
        head=head->next;
    }
    cout<<"\n";
}

Node* reverse(Node* head){          //reversing using iterative method
    Node *current,*next,*prev;
    current=head;
    prev=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}


int main(){             
    Node* head=NULL;
    head=insert(head,1);
    head=insert(head,2);
    head=insert(head,3);
    head=insert(head,4);
    print(head);
    head=reverse(head);
    print(head);
    return 0;
}
