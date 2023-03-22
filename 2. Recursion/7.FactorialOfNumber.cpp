#include<iostream>
using namespace std;

int fact(int n){
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

int factIterative(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    cout<<fact(5)<<endl;
    cout<<factIterative(5);

    return 0;
}