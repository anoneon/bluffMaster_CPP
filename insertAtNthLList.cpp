#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head=NULL;

void insert(int value,int pos){
    Node* tmp1= new Node();  // (Node*)malloc(sizeof(Node)); in C
    tmp1->data=value;        // OR (*tmp).data=value
    if(pos==1){
        tmp1->next=head;
        head=tmp1;
        return;
    }
    Node* tmp2=head;
    for(int i=0;i<pos-2;i++){
        tmp2=tmp2->next;
    }
    tmp1->next=tmp2->next;
    tmp2->next=tmp1;
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

int main(){                          // if we declare head here we have to pass it to functions as it will become local to main
    int n,value;
    insert(12,1);
    insert(13,2);
    insert(18,1);
    insert(20,3);
    print();
    return 0;
}
