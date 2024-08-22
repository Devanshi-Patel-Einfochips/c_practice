#include<string>
#include<iostream>
#include<fstream>
// #include<ofstream>
// #include <ifstream>
#include<experimental/filesystem>
using namespace std;
 


 int main(){
    ofstream textstream{"data"};
    textstream << 12345678;

    ofstream binarytsream{"binary", ios:: binary| ios:: out};
    int num {12345678};
    binarytsream.write((const char*)&num, sizeof(num) );
    num=0;
    binarytsream.close();
    ifstream input{"binary", ios:: binary| ios:: out};
    input.read((char*)&num, sizeof(num));

    cout << num <<endl;
    return 0;

 }