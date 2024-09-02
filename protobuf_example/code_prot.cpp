#include<iostream>
#include "google_protobuf_e1.pb.h"
using namespace std;


int main(){
    tutorial::Person p;
    p.set_name("devanshi");
    p.set_id(101);
    p.set_email("devanshi.patel1@einfochips.com");
    cout << "name: " << p.name();
    cout << "\nid: "<< p.id();
    cout << "\nemail: " << p.email();;
    return 0;
    }