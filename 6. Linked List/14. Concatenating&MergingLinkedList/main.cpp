#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*head1=NULL,*head2=NULL;

void create(int A[],int n){
    int i;
    Node *temp,*last;

    head=new Node;
    head->data=A[0];
    head->next=NULL;
    last=head;

    for(i=1;i<n;i++){
        temp=new Node;
        temp->data=A[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

void display(Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

void Concatenate(){
    Node *p=head1;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=head2;
    head2=NULLL;
}

void Merge(){
}

int main()
{
    int A[]={1,2,3,4,5,6};
    create(A,6);

    reverseLinkedList();
    display();

    return 0;
}
