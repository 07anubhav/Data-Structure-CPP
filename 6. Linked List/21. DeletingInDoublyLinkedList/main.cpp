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

void deleteNode(int pos){
    Node *p=head;

    if(pos==1){
        head=head->next;
        delete p;
        if(head){
            head->prev=nullptr;
        }
    }
    else{
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next){   /*i.e [if(p->next!=NULL)]*/
            p->next->prev=p->prev;
        }
        delete p;
    }
}

int main()
{
    int A[]={3,6,1,5,7};
    create(A,5);

    deleteNode(5);

    display();

    return 0;
}
