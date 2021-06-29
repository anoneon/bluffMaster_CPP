/** printing linked list forward and in reverse order using recursion **/

#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* insert(Node* head,int item){
    Node* tmp=new Node();
    tmp->data=item;
    tmp->next=NULL;
    if(head==NULL){
        head=tmp;
    }
    else{
        Node*tmp2=head;
        while(tmp2->next!=NULL){
            tmp2=tmp2->next;
        }
        tmp2->next=tmp;
    }
    return head;
}
void printListForward(Node* head){
    if(head==NULL)
        return;
    cout<<head->data<<" ";
    printListForward(head->next);
}

void printListBackward(Node* head){
    if(head==NULL)
        return;
    printListBackward(head->next);
    cout<<head->data<<" ";
}
int main(){
    Node* head=NULL;
    head=insert(head,2);
    head=insert(head,3);
    head=insert(head,4);
    head=insert(head,6);
    printListForward(head);
    cout<<endl;
    printListBackward(head);
}