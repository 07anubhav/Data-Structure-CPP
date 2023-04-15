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

int max(Node *p){
    int m=-32768;
    while(p!=0){
        if(p->data > m){
            m=p->data;
        }
        p=p->next;
    }
    return m;
}

int main()
{
    int A[]={3,4,7,0,15};
    create(A,5);
    cout<<"Max element: "<<max(head);
    return 0;
}
