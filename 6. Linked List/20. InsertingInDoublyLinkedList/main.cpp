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

void insert(int pos, int x){
    Node *q=nullptr,*p=head,*temp;

    temp=new Node;
    temp->data=x;
    temp->prev=temp->next=nullptr;

    if(pos==0){
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    else{
        for(int i=0;i<pos;i++){
            q=p;
            p=p->next;
        }
        temp->next=q->next;
        temp->prev=q;
        q->next=temp;
        p->prev=temp;
    }

}

int main()
{
    int A[]={3,6,1,5,7};
    create(A,5);

    insert(3,10);

    display();

    return 0;
}
