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

void insertInSortedList(int x){
    Node *temp,*p=head,*tail=NULL;

    temp=new Node;
    temp->data=x;
    temp->next=NULL;

    if(head==NULL){
        head=temp;
    }
    else{
        while(p!=NULL && p->data<x){
            tail=p;
            p=p->next;
        }
        if(p==head){
            temp->next=head;
            head=temp;
        }
        else{
            temp->next=tail->next;
            tail->next=temp;
        }
    }
}

int main()
{
    int A[]={3,5,9,15};
    create(A,4);

    insertInSortedList(20);
    insertInSortedList(0);
    insertInSortedList(10);
    display();
    return 0;
}
