#include<string>
#include<iostream>
#include<utility>
#include<climits>
using namespace std;


class Employee{
    private:
    string emp_name;
    int emp_id;
    double emp_salary;
public:
    Employee(string name, int id, int salary): emp_name(name),emp_id(id), emp_salary(salary){
        emp_name = name;
        emp_id= id;
        emp_salary = salary;
    }
    void display(){
        cout << emp_name << emp_id << emp_salary << endl;
    }
};

// template<typename T>
// T* CreateObject(T value){
//     return new T(value);
// }
template<typename T1, typename ... Params>

T1* CreateObject(Params ... args){
    return new T1(forward<Params>(args)...);
}
int main(){
int *s = CreateObject<int>(5);
string * s1 = CreateObject<string>("devs");
Employee *emp = CreateObject<Employee>("devs",100,50000);
cout << *s1 << endl;
emp->display();
}