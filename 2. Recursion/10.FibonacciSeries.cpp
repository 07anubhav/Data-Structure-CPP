#include<iostream>
using namespace std;

/*Recursive*/
int fib1(int n){
    if(n<=1) return n;
    return fib1(n-2)+fib1(n-1);
}
int F[10];
int fib2(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1){
            F[n-2]=fib2(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=fib2(n-1);
        }
    }
    return F[n-2]+F[n-1];
}

/*Iterative*/
int fib3(int n){
    int t1=0,t2=1,s=0;
    if(n<=1){
        return n;
    }
    else{
        for(int i=2;i<=n;i++){
            s=t1+t2;
            t1=t2;
            t2=s;
        }
    }
    return s;
}

int main(){
    cout<<fib1(10)<<endl;
    cout<<fib3(10)<<endl;

    for(int i=0;i<10;i++){
        F[i]=-1;
    }
    cout<<fib2(10)<<endl;
    
    return 0;
}