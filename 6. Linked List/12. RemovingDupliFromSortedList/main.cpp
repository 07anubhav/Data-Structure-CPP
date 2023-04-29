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
int countNodes(){
    Node *p=head;
    int c=0;

    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}

void removeDuplicates(){
    Node *q=head,*p=head->next;

    while(p!=NULL){
        if(q->data!=p->data){
            q=p;
            p=p->next;
        }
        else{
            q->next=p->next;
            delete p;
            p=q->next;
        }
    }
}

int main()
{
    int A[]={3,5,5,8,8,8};
    create(A,6);
    removeDuplicates();
    display();

    return 0;
}
