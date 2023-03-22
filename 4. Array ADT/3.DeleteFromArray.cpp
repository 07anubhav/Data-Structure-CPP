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

int delete1(Array *arr,int index){
    int x=0;
    if(index>=0 && index<=arr->length){
        x=arr->A[index];
        for (int i=index;i<arr->length-1;i++)
        {   
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;   
        return x;
    }
    return 0;
}

int main(){
    Array arr = {{2,3,4,5,6},10,5};
    cout<<delete1(&arr,2)<<endl;
    display(arr);
    cout<<endl<<"size: "<<arr.size<<" length: "<<arr.length<<endl;
    return 0;
}