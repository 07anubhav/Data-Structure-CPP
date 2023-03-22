#include<iostream>
using namespace std;

int main(){
    /*Variable size array cannot be intialized*/
    int a[5];
    a[0]=12;
    a[2]=4;
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    cout<<sizeof(a)<<endl;

    int b[5]={2,4,12,4,8};
    /*for each loop*/ 
    for(int i:b){
        cout<<i<<endl;
    }
    return 0;
}