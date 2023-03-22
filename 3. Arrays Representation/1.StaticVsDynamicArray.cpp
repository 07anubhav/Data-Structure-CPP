#include<iostream>
using namespace std;

int main(){
    /*Static Array*/
    int A[10]={2,32,4,5,76,87,90,5,83,45};

    /*Dynamic Array*/
    int *p;
    p = new int[5];
    for(int i=0;i<5;i++){
        p[i]=i+1;
    }
    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }

    delete []p;
    
    return 0;
}