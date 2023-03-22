#include<iostream>
using namespace std;

int main(){
    char s[]="welcome";
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
    cout<<"Length is: "<<count;
}
