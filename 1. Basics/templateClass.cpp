#include<iostream>
using namespace std;

template<class T>
class Arithmetic{
private:
    T a;
    T b;
public:
    Arithmetic(T a,T b);
    T add();
};

template<class T>
Arithmetic<T>::Arithmetic(T a,T b){
    this->a=a;
    this->b=b;
}

template<class T>
T Arithmetic<T>::add(){
    T c;
    c=a+b;

    return c;
}

int main(){
    Arithmetic<int> ar1(10,20);
    cout<<ar1.add()<<endl;
    
    Arithmetic<float> ar2(12.4,24.7);
    cout<<ar2.add()<<endl;
    
    return 0;
}
