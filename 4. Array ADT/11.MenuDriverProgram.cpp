#include<iostream>
using namespace std;

struct Array
{
    int A[100];
    int size;
    int length;
};

int main(){
    Array arr;
    int ch;

    cout<<"Enter the size of the array: ";
    cin>>arr.size;

    return 0;   
}