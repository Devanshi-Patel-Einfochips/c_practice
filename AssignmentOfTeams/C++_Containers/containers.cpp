#include<string>
#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<algorithm>
using namespace std;


int main(){
    map<string, int> Students;
    string name;
    int score;
    int data;
    vector<string> PassStudents; 
    list<string> sortNames;

    map<string,int> :: iterator it = Students.begin();
        cout << "Enter Number of data to Add: ";
        cin >> data;

    cout << "Enter Student Name and asscociated score: ";
    for(int i=0;i<data;i++){
        cout << i << ". ";
        cin >> name;
        // cout << "Score: ";
        cin >> score;

        Students[name] = score;
    }
    cout << "NAME AND SCORES ARE: " <<endl;
    for (const auto &student : Students) {
        cout << student.first << " - " << student.second << endl;
    }
    it = Students.begin();

while(it!= Students.end()){
    if(it->second >= 60){
        PassStudents.push_back(it->first);

    }
    ++it;
}

// cout<< "STUDENTS WHO PASS: " << endl;
// for(auto x : PassStudents){
//     sortNames.push_back(x);
//     cout << x << endl;

// }
sortNames.sort();

cout<< "PASSED SORTED STUDENTS ARE: " << endl;
for(auto x : sortNames){
    cout << x << endl;

}

return 0;
}