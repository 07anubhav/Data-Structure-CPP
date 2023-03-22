#include<iostream>
using namespace std;

/*defining a structure*/
struct rectangle
{
    int length;
    int breadth;
}r2;


int main(){
    /*declaration of structure*/
    struct rectangle r1;
    r1={10,5};
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    
    r2={20,30};
    cout<<r2.length<<endl;
    cout<<r2.breadth<<endl;
    
    return 0;
}