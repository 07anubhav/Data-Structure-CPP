#include<iostream>
using namespace std;
struct rectangle
{
    int len;
    int wid;
};

int main(){
    struct rectangle r={10,5};
    struct rectangle *p=&r;
    cout<<&r<<endl;
    cout<<r.len<<endl;
    cout<<r.wid<<endl;
    
    cout<<p<<endl;
    cout<<p->len<<endl;
    cout<<p->wid<<endl;

    /*creating pointer to structure dynamically*/
    rectangle *p2;
    p2=new rectangle;

    p2->len=20;
    p2->wid=30;
    cout<<p2<<endl;
    cout<<p2->len<<endl;
    cout<<p2->wid<<endl;

    return 0;
}