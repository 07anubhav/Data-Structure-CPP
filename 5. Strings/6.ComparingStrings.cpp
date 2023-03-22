#include<iostream>
using namespace std;

int main(){
    char A[]="Painter";
    char B[]="painting";
    int i,j;

    for(i=0,j=0;A[i]!='\0' && B[i]!='\0';i++,j++){
        if(A[i]!=B[j]){
            cout<<A[i]<<" Not Equal "<<B[j]<<endl;
            break;
        }
        if(A[i]==B[j]){
            cout<<A[i]<<" Equal "<<B[j]<<endl;
        }
        else if(A[i]<B[j]){
            cout<<A[i]<<" Smaller "<<B[j]<<endl;
        }
        else{
            cout<<A[i]<<" Greater "<<B[j]<<endl;
        }
    }

    return 0;
}

