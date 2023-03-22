#include<iostream>
using namespace std;

struct Array
{
    /* data */
    int A[10];
    int size;
    int length;
};

void display(Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}
    
int BinarySearch(Array arr,int key){
    int l,mid,h;
    l=0;
    h=arr.length-1;

    while (l<=h){
        mid=(l+h)/2;
        if(key==arr.A[mid]){
            return mid;
        }
        else if(key<arr.A[mid]){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
}

int RBinSearch(int arr[],int l, int h,int key){
    int mid;

    if(l<=h){
        mid=(l+h)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            return RBinSearch(arr,l,mid-1,key);
        }
        else{
            return RBinSearch(arr,mid+1,h,key);
        }
    }
    return -1;
}
int main(){
    Array arr = {{2,3,4,5,6},10,5};
    cout<<BinarySearch(arr,10)<<endl;
    cout<<RBinSearch(arr.A,0,arr.length-1,6);
    return 0;
}