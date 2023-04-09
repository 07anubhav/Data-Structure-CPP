#include<iostream>
using namespace std;

struct rectangle
{
    int len;
    int wid;
};

/*Call by value*/
void func1(rectangle r1){
    r1.len=5;
    r1.wid=15;
    cout<<"Lenght: "<<r1.len<<" Width: "<<r1.wid<<endl;
}

/*Call by address*/
void func2(rectangle *r1){
    r1->len=100;
    r1->wid=200;
    cout<<"Lenght: "<<r1->len<<" Width: "<<r1->wid<<endl;
}

/*Dynamic structure to pointers*/
/*structure is created in heap and it is returning structure address*/
struct rectangle *func3(){
    rectangle *p;
    p=new rectangle;
    p->len=500;
    p->wid=100;

    return p;
}

int main(){
    rectangle r1={10,20};
    rectangle r2={50,60};
    func1(r1);
    cout<<"Lenght: "<<r1.len<<" Width: "<<r1.wid<<endl;

    func2(&r2);
    cout<<"Lenght: "<<r2.len<<" Width: "<<r2.wid<<endl;

    rectangle *ptr;
    ptr=func3();
    cout<<ptr->len<<" "<<ptr->wid<<endl;

    return 0;
}
