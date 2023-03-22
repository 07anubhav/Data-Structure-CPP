#include<iostream>
using namespace std;

int main(){
    int *p,*q;
    p=new int[5];
    p[0]=10;p[1]=20;p[2]=30;p[3]=40;p[4]=50;
    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }cout<<endl;
    
    q=new int[10];
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }
    delete []p;
    p=q;
    q=NULL;
    
    for(int i=0;i<10;i++){
        cout<<p[i]<<" ";
    }

    return 0;
}