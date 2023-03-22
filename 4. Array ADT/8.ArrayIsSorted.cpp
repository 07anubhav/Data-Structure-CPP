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

void ReArrange(Array *arr){
    int i=0,j=arr->length-1;
    while(i<j){
        while (arr->A[i]<0){
            i++;
        }
        while (arr->A[j]>0){
            j--;
        }
        if(i<j){
            Swap(&arr->A[i],&arr->A[j]);
        }
    }
}

int InsertSort(Array *arr,int x){
    int i=arr->length-1;
    if(arr->length == arr->size){
        return 1;
    }
    while(arr->A[i]>x && i>=0){
        arr->A[i+1]=arr->A[i];
    }
    arr->A[i+1]=x;
    arr->length++;
}

int IsSorted(Array arr){
    for(int i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1]){
            return 0;
        }
    }
    return 1;
}


int main(){
    Array arr1={{2,3,5,10,15,18},20,6};
    Array arr2={{2,3,-5,10,-6,-15},20,6};
    /* InsertSort(&arr1,13); */
    /* cout<<IsSorted(arr1); */
    ReArrange(&arr2);
    Display(arr2);

    return 0;
}