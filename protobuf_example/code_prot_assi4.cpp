#include<iostream>
#include <fstream>
#include "g_proto_e4.pb.h"
using namespace std;

void InputAddressData(addressSerialize::Person* person){
    cout << "Enter Name: ";
    string name;
    
    getline(cin, name);
person->set_name(name);


    cout << "Enter id: ";
    int id;
    cin >> id;
    person->set_id(id);

    cout << "Enter email: ";
    string email;
    cin >> email;
    person->set_email(email);
}

void SerializeFile(const addressSerialize::AddressBook& add_b,const string& filename){
    fstream output(filename, ios::binary | ios::out);
        if(!add_b.SerializeToOstream(&output)){
            cerr << "cannot convert to binary" << endl;
        }
    
}

addressSerialize::AddressBook DeSerializeOuputFile(const string& filename){
    addressSerialize::AddressBook add_b;
    fstream input(filename, ios::binary| ios::out);
        if(!add_b.ParseFromIstream(&input)){
            cerr << "cannot parse the file" << endl;
        }
        return add_b;
    
}

void PrintAddressBook(addressSerialize::AddressBook& add_b)
{

for(int i=0;i< add_b.people_size();++i){
    const addressSerialize::Person& p = add_b.people();

        cout << "Person " << i+1 << endl;

    cout << "Name: " << p.name() << endl;
    cout << "id: " << p.id() << endl;
    if(!p.email().empty()){
       cout << "Email: "  << p.email() << endl;
    }
}
    }
    int main(){
    addressSerialize::AddressBook add_b;
    for(int i =0; i< 2;++i){
         addressSerialize::Person* person = add_b.add_people();
        InputAddressData(person); 
    }
    string filename = "binary.bin";
    SerializeFile(add_b, filename);

    addressSerialize::AddressBook deser = DeSerializeOuputFile(filename);
    PrintAddressBook(add_b);

    return 0;
}
