#include<iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void display(Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i];
    }
}

int main(){
    Array arr;
    int n;

    cout<<"Enter the size of the array: ";
    cin>>arr.size;

    arr.A = new int[arr.size];
    arr.length = 0;

    cout<<"Enter the no. of numbers you want: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr.A[i];
    }
    arr.length=n;
    display(arr);

    return 0;
}
