#include <iostream>
#include "nestedMessage.pb.h"  // Include the generated header file
using namespace std;
int main() {
    nestedExample::Person person;
    // Set the fields of the Person message
    person.set_id(111);
    person.set_name("dess");
    person.set_email("devs.p@example.com");
    person.set_phone_number("123456789");

    nestedExample::Person::Address* ad1 = person.add_address();
    ad1->set_city("ahmedabd");
    ad1->set_zipcode(38005);
    ad1->set_street("devarrya, motera");

    nestedExample::Person::Address* ad2 = person.add_address();
    ad2->set_city("baroda");
    ad2->set_zipcode(38205);
    ad2->set_street("devarrya new, motera");



    // Print the fields
    cout << "ID: " << person.id() << std::endl;
    cout << "Name: " << person.name() << std::endl;
    cout << "Email: " << person.email() << std::endl;
    cout << "Phone Number: " << person.phone_number() << std::endl;
        cout << "address[" << endl;

    for(int i=0;i<person.address_size();++i){
        const nestedExample::Person::Address& a = person.address(i);
        cout <<  "{" << endl;
        cout<< "city: " << a.city() << endl;
        cout<< "zipcode: " << a.zipcode() << endl;
        cout<< "address: " << a.street() << endl;
        cout << "}" << endl;

    }
            cout << "]" << endl;


    return 0;
}
