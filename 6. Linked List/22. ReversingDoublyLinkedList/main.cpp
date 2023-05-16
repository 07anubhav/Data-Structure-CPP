#include <iostream>
using namespace std;

struct Node{
    Node *prev;
    int data;
    Node *next;
}*head=NULL;

void create(int A[],int n){
    Node *temp,*last;

    head=new Node;
    head->data=A[0];
    head->prev=head->next=NULL;
    last=head;

    for(int i=1;i<n;i++){
        temp=new Node;
        temp->data=A[i];
        temp->next=last->next;
        temp->prev=last;
        last->next=temp;
        last=temp;
    }
}

void display(){
    Node *p=head;

    while(p!=nullptr){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int length(){
    Node *p=head;
    int len=0;
    while(p!=nullptr){
        len++;
        p=p->next;
    }
    return len;
}

void reverseList(){
    Node *p=head,*temp;

    while(p!=NULL){
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=NULL && p->next==NULL){
            head=p;
        }
    }
}

int main()
{
    int A[]={3,6,1,5,7};
    create(A,5);

    reverseList();

    display();

    return 0;
}
