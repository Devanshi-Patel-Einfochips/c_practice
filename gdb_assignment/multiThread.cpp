
#include<iostream>
#include<thread>
using namespace std;
 

void printdata(){
    cout << "data has been printed: started" << endl;
    int a = 10, b=12;
    if(a<b) {
        cout << "in the loop" << endl;
    }
    cout << "completed the printdata thread" << endl;
}

void printdataSum(){
    cout << "data has been added: started" << endl;
    int a = 10, b=12;
        cout << "sum: 10 + 12: " << a+b << endl;
    cout << "completed the add" << endl;
}


 int main(){
    cout << "main program started" << endl;
    thread t1(printdata);
    thread t2(printdataSum);
    t1.join();
    t2.join();
    cout << "main program ended" << endl;
    return 0;

 }