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

Array* Union(Array *arr1,Array *arr2){
    int i,j,k;
    i=j=k=0;

    Array *arr3;
    arr3=new Array[sizeof(Array)];

    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else if(arr2->A[j]<arr1->A[i]){
            arr3->A[k++]=arr2->A[j++];
        }
        else{
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }

    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i++];

    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j++];

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

Array* Intersection(Array *arr1,Array *arr2){
    int i,j,k;
    i=j=k=0;

    Array *arr3;
    arr3=new Array[sizeof(Array)];

    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            i++;
        }
        else if(arr2->A[j]<arr1->A[i]){
            j++;
        }
        else if(arr1->A[i]==arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

Array* Difference(Array *arr1,Array *arr2){
    int i,j,k;
    i=j=k=0;

    Array *arr3;
    arr3=new Array[sizeof(Array)];

    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else if(arr2->A[j]<arr1->A[i]){
           j++;
        }
        else{
            i++;
            j++;
        }
    }

    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i++];

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

int main(){
    Array arr1={{2,6,10,15,25},20,5};
    Array arr2={{3,6,7,15,20},20,5};
    Array *arr3;

    arr3=Difference(&arr1,&arr2);
    Display(*arr3);

    return 0;
}
