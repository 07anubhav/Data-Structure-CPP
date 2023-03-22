#include<bits/stdc++.h>
using namespace std;

int main(){
    long double t; int x=0;
    cout<<"no. of test cases: ";
    cin>>t;

    while (x<t){
        long double n;
        cin>>n;
        long sum=0;

        for(int i=1;i<=n;i++){
            if(i%3==0 || i%5==0){
                sum += i;
            }
        }
        cout<<endl;
        cout<<sum;
    }

    return 0;
}