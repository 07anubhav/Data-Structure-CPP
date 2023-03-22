#include<iostream>
using namespace std;

/*Call by value*/
void callByValue(int a,int b){
    a++;
    b++;
    cout<<"call by value a: "<<a<<endl;
    cout<<"call by value b: "<<b<<endl;
}

/*Call by address*/
void callByAddress(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<"call by address x: "<<*x<<endl;
    cout<<"call by address y: "<<*y<<endl;
}

/*Call by reference*/
void callByReference(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"call by reference x: "<<x<<endl;
    cout<<"call by reference y: "<<y<<endl;
}

int main(){
    int n1=10,n2=20;
    callByValue(10,20);
    cout<<"n1: "<<n1<<endl;
    cout<<"n2: "<<n2<<endl;

    int m1=10,m2=20;
    callByAddress(&m1,&m2);
    cout<<"m1: "<<m1<<endl;
    cout<<"m2: "<<m2<<endl;

    int o1=10,o2=20;
    callByReference(o1,o2);
    cout<<"o1: "<<o1<<endl;
    cout<<"o2: "<<o2<<endl;

    return 0;
}