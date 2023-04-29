#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*head=NULL;

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

void display(){
    Node *p=head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

void reverseLinkedList(){
    Node *r=NULL,*q=NULL,*p=head;

    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
}

int main()
{
    int A[]={1,2,3,4,5,6};
    create(A,6);

    reverseLinkedList();
    display();

    return 0;
}
