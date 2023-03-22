#include<iostream>
using namespace std;

void func(int A[],int n){
    cout<<sizeof(A)/sizeof(int)<<endl;

    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
    /*If we will change the value it will also reflect in the actual array in the main function*/
    A[0]=10;
}

/*Creating dynamic array in heap*/
int * func2(int size){
    int *p;
    p=new int[size];

    for(int i=0;i<size;i++){
        p[i]=i+1;
    }
    return p;
}

int main(){
    int a[]={1,2,3,4,5};
    int n=5;
    func(a,n);

    for(int x:a){
        cout<<x<<" ";
    }
    cout<<endl;
    
    int *ptr,sz=10;
    ptr=func2(sz);
    for(int i=0;i<sz;i++){
        cout<<ptr[i]<<" : ";
    }

    return 0;
}