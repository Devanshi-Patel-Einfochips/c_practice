// ASSINMENT 3
#include<iostream>
#include "g_proto_e2.pb.h"
using namespace std;


int main(){
    addressbookdata::AddressBook a;
    addressbookdata::Person* p1 = a.add_people();
    p1->set_name("devs");
    // IF NOT SET THEN DEFAULT VALUES ARE TAKEN BY DEFAULT
    // p1->set_id(101);
    p1->set_phone_number("123456789");
    p1->set_email("avc@gmail.com");

    addressbookdata::Person* p2 = a.add_people();
    p2->set_name("ryan");
    // p2->set_id(102);
    p2->set_phone_number("987654321");
    p2->set_email("asd@gmail.com");

    for(int i=0;i<a.people_size();++i){
        const addressbookdata::Person& p = a.people(i);
        cout << "Person " << i+1 << endl;
        cout << "name: " << p.name();
        cout << "\nid: "<< p.id();
        cout << "\nemail: " << p.email()    ;
        cout << "\nphone number: " << p.phone_number() << "\n";
        
        }



    return 0;
    }