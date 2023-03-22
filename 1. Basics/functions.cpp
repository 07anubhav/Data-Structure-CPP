#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

int main(){
    int n1=10,n2=20,sum=0;
    sum=add(n1,n2);
    cout<<sum<<endl;

    return 0;
}