#include<iostream>
using namespace std;

struct Array
{
    /* data */
    int A[20];
    int size;
    int length;
};

void display(Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int Get(Array arr,int index){
    for(int i=0;i<arr.length;i++){
        if(index>=0 && index<arr.length){
            return arr.A[index];
        }
        return -1;
    }
    
}

void Set(Array *arr, int index, int value){
    if(index>=0 && index<arr->length){
        arr->A[index]=value;
    }
}

int Max(Array arr){
    int max=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]>max){
            max=arr.A[i];
        }
    }
    return max;
}

int Min(Array arr){
    int min=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]<min){
            min=arr.A[i];
        }
    }
    return min;
}

int Sum(Array arr){
    int sum=0;
    for(int i=0;i<arr.length;i++){
        sum += arr.A[i];
    }
    return sum;
}

float Avg(Array arr){
    return (float)Sum(arr)/arr.length;
}

int main(){
    Array arr = {{2,3,4,5,64,2,78,9,12,43,65,72,54,1,0},20,15};

    cout<<Get(arr,3)<<endl;

    Set(&arr,5,100);
    display(arr);

    cout<<Max(arr)<<endl;
    cout<<Min(arr)<<endl;
    cout<<Sum(arr)<<endl;
    cout<<Avg(arr);

    return 0;
}