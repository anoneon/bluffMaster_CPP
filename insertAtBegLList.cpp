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
    tmp->data=value;        // OR (*tmp).data=value
    tmp->next=head;
    head=tmp;
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
    cout<<"How many data you wanna enter? : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter value to insert : ";
        cin>>value;
        insert(value);
        print();
        cout<<"\n";
    }
    return 0;
}
