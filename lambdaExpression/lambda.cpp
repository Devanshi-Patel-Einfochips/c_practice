#include <string>
#include<vector>
#include<iostream>
using namespace std;

template<typename T>

struct Comp{
    T operator()(T a, T b){
    return a>b ? b:a;
    }
    bool Greater(T a, T b){
        return a> b ? true : false;
    }
};


int main(){
    Comp<int> c;
    int a = c(9,5);
    cout  << "if 9 is greater than 5 then print 9: " << a<< endl;
    return 0;
}