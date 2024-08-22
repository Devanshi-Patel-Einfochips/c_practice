#include <string>
#include<vector>
#include<iostream>
using namespace std;

template<typename T>

struct Comp{
    T operator()(T a, T b){
return a>b ? a:b;
    }
    bool Greater(T a, T b){
        return a> b ? true : false;
    }
};


int main(){
    Comp<int> c;
    c(3,5);
}