#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *p; /*declaration of pointer*/
    p=&a; /*initializing pointer*/
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<"*******************"<<endl;

    int b[5]={2,4,6,8,10};
    int *p2;
    /*don't use '&b' with an array, it will store the first address of the array*/
    p2=b;
    for(int i=0;i<5;i++){
        cout<<p2[i]<<endl;
    }
    cout<<"*******************"<<endl;
    /*heap memory*/
    int *p3;
    p3=new int[5];
    p3[0]=1;p3[1]=2;p3[2]=3;p3[3]=4;p3[4]=5;
    for(int i=0;i<5;i++){
        cout<<p3[i]<<endl;
    }
    delete [] p3;
    free(p);

    return 0;
}