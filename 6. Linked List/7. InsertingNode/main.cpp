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

void insert(int pos,int x){
    Node *temp,*p;

    if(pos==0){
        temp=new Node;
        temp->data=x;
        temp->next=head;
        head=temp;
    }
    else if(pos>0){
        p=head;

        for(int i=0;i<pos-1 && p!=NULL;i++){
            p=p->next;
        }

        if(p){
            temp=new Node;
            temp->data=x;
            temp->next=p->next;
            p->next=temp;
        }
    }
}

int main()
{
    insert(0,10);
    insert(1,20);
    insert(2,50);
    insert(0,100);
    display();
    return 0;
}
