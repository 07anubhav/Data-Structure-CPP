#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}

int sumIterative(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}

int main(){
    cout<<sum(10)<<endl;
    cout<<sumIterative(10);
    return 0;
}