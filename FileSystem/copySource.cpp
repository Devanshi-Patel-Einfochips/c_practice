#include<string>
#include<iostream>
#include<fstream>
// #include<ofstream>
// #include <ifstream>
#include<experimental/filesystem>
using namespace std;

int main(){

    using namespace std:: experimental:: filesystem;
    path source(current_path());
    source /= "copySource.cpp";

    path dest(current_path());
    dest /= "copydest.cpp";

    ifstream input{source};
    if(!input){
        cout << "THERE IS NOT SUCH FILE" <<endl;
    }
    ofstream output{dest};
    string line;
    while(!(getline(input, line)).eof()){
        output << line << endl;
    }
    input.close();
    output.close();
    // string str;
    // cout << "Write name: " << endl;
    // getline(cin, str);
    // cout << "str data: " << str << endl;

    return 0;


}