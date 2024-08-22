#include<string>
#include<iostream>
#include<fstream>
// #include<ofstream>
// #include <ifstream>
#include<experimental/filesystem>

using namespace std;
void Write(){
        ofstream out{"data.txt"};
        out << "devanshi here" << endl;
        out << 10 <<  endl;

        out.close();
}


void Read(){
    ifstream input{"dat.txt"};
    if(input.fail()){
    cout << "THERE IS NOT SUCH FILE" << endl;
    }
    string message;
    getline(input, message);
    int val{};
    input >> val;
    input.close();
    cout << "message is : " << message << "value: " << val;
}
int main(){
Write();
Read();
return 0;
}