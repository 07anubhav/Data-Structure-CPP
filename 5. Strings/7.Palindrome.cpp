#include<iostream>
using namespace std;

int main(){
    char A[]="MADIM";
    int i,j;

    for(j=0;A[j]!='\0';j++){}
    j=j-1;

    for(i=0;i<j;i++,j--){
        if(A[i]!=A[j]){
            cout<<"Not Palindrome";
            break;
        }
    }

    return 0;
}
