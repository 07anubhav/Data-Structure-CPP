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

int deleteAtPos(int pos){
    int valueDeleted;
    Node *p=head,*tail=NULL;

    if(pos==1){
        head=head->next;
        valueDeleted = p->data;
        delete p;
    }
    else{
        for(int i=0;i<pos-1 && p;i++){
            tail=p;
            p=p->next;
        }
        if(p!=NULL){
            tail->next=p->next;
            valueDeleted=p->data;
            delete p;
        }
    }
    return valueDeleted;
}

int main()
{
    int A[]={3,5,9,15,0,7,8,23,1,26};
    create(A,10);

    cout<<"Value deleted: "<<deleteAtPos(1)<<endl;
    display();

    return 0;
}
