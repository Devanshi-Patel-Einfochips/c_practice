#include <string>
#include<vector>
#include<iostream>
using namespace std;

template<typename T>
class Stack{
    private:
    vector<T> elements;
    int data_pointer{-1};
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
    template <typename T1> 

    friend void printStack(const Stack<T1>& stack);

 


};

template <typename T1> 
void printStack(const Stack<T1>& stack){
    for (int i = 0; i <= stack.size()-1; i++) {
        cout << stack.elements[i] << " ";
    }
    cout << endl;
}; 

int main(){
    Stack <int>s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    if(s.isEmpty()){
    int data = s.top();
    cout << data << endl;
    
    }
   
    size_t si = s.size();
    cout << "size of data: " << si << endl;
        cout << "stack data:" << endl;
    printStack(s);

    Stack<string> s1;
    s1.push("hello");
    s1.push("devanshi");

    cout <<"string stack data" << endl;
    printStack(s1);

    
    return 0;
}