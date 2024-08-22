#include <string>
#include<vector>
#include<iostream>
using namespace std;

template<typename T>
class Stack{
    private:
    vector<T> elements;
    T data_pointer{-1};
    public:
     void push(const T& ele){
            elements.push_back(ele);
            ++data_pointer;

     } 
    void pop(){
        elements.pop_back();
        --data_pointer;
    }
    T top() const{
        return elements[data_pointer];

    }
    bool isEmpty() const{
        if(elements.size() == 0){
            return true;
        }
        else 
         return false;
    }
    size_t size() const{
        return elements.size();
    }; 


};

int main(){
    Stack <int>s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int data = s.top();
    cout << data << endl;
    s.pop();
    cout << s.top() << endl;
    size_t si = s.size();
    cout << "size of data: " << si << endl;
    if(s.isEmpty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not Empty" << endl;
    }
    return 0;
}