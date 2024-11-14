#include<string>
#include<iostream>
#include<utility>
#include<climits>
using namespace std;

// template <typename T>
// T Max(T x, T y){
//     cout << "x and y" << x << y << endl;
//      return x > y ?x :y;    
// }

// int main(){
//     Max<float>(3);
//     return 0;

// }
template <typename T>
class MyClass {
public:
    void display() {
        cout << "hyr" << endl;
    }
};

// Explicit instantiation declaration
extern template class MyClass<int>;
extern template class MyClass<double>;

// Explicit instantiation definition
template class MyClass<int>; // Generates code for MyClass<int>
template class MyClass<double>; // Generates code for MyClass<int>

int main() {
    MyClass<float> obj; // Uses the already instantiated MyClass<int>
    obj.display();
    return 0;
}