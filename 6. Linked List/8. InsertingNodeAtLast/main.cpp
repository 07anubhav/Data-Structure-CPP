#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*head=NULL,*last=NULL;

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

void insertLast(int x){
    Node *temp = new Node;
    temp->data=x;
    temp->next=NULL;

    if(head==NULL){
        head=last=temp;
    }
    else{
        last->next=temp;
        last=temp;
    }
}

int main()
{
    insertLast(10);
    insertLast(20);
    insertLast(30);
    display();

    return 0;
}
