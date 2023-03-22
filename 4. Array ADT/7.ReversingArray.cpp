#include<iostream>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

void Swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void Reverse(Array *arr){
    int *b;
    int i,j;
    b=new int[arr->length];

    for(i=arr->length-1,j=0;i>=0;i--,j++){
        b[j]=arr->A[i];         
    }
    for(int i=0;i<arr->length;i++){
        arr->A[i]=b[i];
    }
}

void Reverse2(Array *arr){
    for(int i=0,j=arr->length-1;i<j;i++,j--){
        Swap(&arr->A[i],&arr->A[j]);       
    }
}

int main(){
    Array arr={{10,20,30,40,50},20,5};
    /* Reverse(&arr); */
    Reverse2(&arr);
    Display(arr);

    return 0;
}