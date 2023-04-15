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
    Node *temp;

}

int add(Node *p){
    int sum=0;
    while(p!=0){
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}

int main()
{
    int A[]={3,4,7,0,15};
    create(A,5);
    cout<<"Sum of all elements: "<<add(head);
    return 0;
}
