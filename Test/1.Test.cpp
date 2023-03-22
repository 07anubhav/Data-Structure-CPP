#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

void sortArray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i];
            if(arr[i]>arr[j]){
                swap(&arr[i],&arr[j]);
            }
        }
    }
}


int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sortArray(arr,n);
    display(arr,n);

    return 0;
}