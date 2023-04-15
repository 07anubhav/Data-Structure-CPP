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

Node* linearSearch(Node *p,int key){
    while(p!=NULL){
        if(key==p->data){
            return p;
        }
        p=p->next;
    }
    return NULL;
}

Node* linearSearchAdvance(Node *p,int key){
    Node *q=NULL;
    while(p!=NULL){
        if(key==p->data){
            q->next=p->next;
            p->next=head;
            head=p;

            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}
int main()
{
    int A[]={3,4,7,0,15,34,65,1,76,55};
    create(A,10);

    Node *ans;
    ans=linearSearchAdvance(head,1);
    cout<<ans->data<<endl;
    display();

    return 0;
}
