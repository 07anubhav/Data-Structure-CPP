#include<iostream>
using namespace std;

int main(){
    char S[]="WELCOME";
    for(int i=0;S[i]!='\0';i++){
        S[i]=S[i]+32;
    }
    cout<<S;

    /*Toggling with upper and lower case*/
    char A[]="weLComE";
    for(int i=0;A[i]!='\0';i++){
        if(A[i]>=65 && A[i]<=90){
            A[i]+=32;
        }
        else if(A[i]>='a' && A[i]<=122){
            A[i]-=32;
        }
    }
    cout<<A;

    return 0;
}
