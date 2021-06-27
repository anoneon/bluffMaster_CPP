#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head=NULL;

void insert(int value){
    Node* tmp= new Node();  // (Node*)malloc(sizeof(Node)); in C
    tmp->data=value;
    tmp->next=NULL;
    if(head==NULL){
        head=tmp;
        return;
    }
    Node* tmp2=head;
    while(tmp2->next!=NULL){
        tmp2=tmp2->next;
    }
    tmp2->next=tmp;
}

void print(){
    Node * tmp=head;
    cout<<"\nList :  ";
    while(tmp!=NULL){
        cout<<"->"<<tmp->data<<"\t";
        tmp=tmp->next;
    }
    cout<<"\n";
}

void deleteItem(int pos){
    Node* tmp1=head;
    if(pos==1){
        head=tmp1->next;
        delete tmp1;
        return;
    }
    for(int i=0;i<pos-2;i++){
        tmp1=tmp1->next;
    }
    Node* tmp2=tmp1->next;
    tmp1->next=tmp2->next;
    delete tmp2;
}


int main(){                          // if we declare head here we have to pass it to functions as it will become local to main
    int n,value;
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    print();
    cout<<"\n Enter position to del : ";
    int pos;
    cin>>pos;
    deleteItem(pos);
    print();
    return 0;
}
