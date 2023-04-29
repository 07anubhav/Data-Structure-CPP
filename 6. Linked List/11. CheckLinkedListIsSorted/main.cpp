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

int countNodes(){
    Node *p=head;
    int c=0;

    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}

int checkSorted(){
    Node *p=head,*tail=NULL;
    int flag=1;

    while(p->next != NULL){
        tail=p;
        p=p->next;

        if(tail->data < p->data){
            flag++;
        }
        else{
            return 0;
        }
    }
    return flag;
}

int main()
{
    int A[]={3,5,8,9,11};
    create(A,5);

    cout<<checkSorted()<<endl;

    if(checkSorted() == countNodes()){
        cout<<"Linked list is sorted"<<endl;
    }
    else{
        cout<<"Linked list is not sorted"<<endl;
    }

    return 0;
}
