#include<iostream>
#include "g_proto_e2.pb.h"
using namespace std;


int main(){
    addressbookdata::AddressBook a;
    addressbookdata::Person* p1 = a.add_people();
    p->set_name("devs");
    p->set_id(101);


    return 0;
    }