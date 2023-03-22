#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void display(Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}

void append(Array *arr,int value){
    if(arr->length < arr->size){
        arr->A[arr->length++] = value;
    }
}

void insert(Array *arr,int index,int value){
    if(index>=0 && index<=arr->length){
        for (int i=arr->length;i>index;i--)
        {   
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=value;
        arr->length++;   
    }
}

int main(){
    Array arr = {{2,3,4,5,6},10,5};
    /*
    append(&arr,10);*/
    insert(&arr,2,20);
    display(arr);

    return 0;
}