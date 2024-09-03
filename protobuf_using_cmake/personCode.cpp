#include <iostream>
#include "personData.pb.h"  // Include the generated header file

int main() {
persondata::Person person;
    // Set the fields of the Person message
    person.set_id(111);
    person.set_name("dess");
    person.set_email("devs.p@example.com");
    person.set_phone_number("123456789");

    // Print the fields
    std::cout << "ID: " << person.id() << std::endl;
    std::cout << "Name: " << person.name() << std::endl;
    std::cout << "Email: " << person.email() << std::endl;
    std::cout << "Phone Number: " << person.phone_number() << std::endl;

    return 0;
}
