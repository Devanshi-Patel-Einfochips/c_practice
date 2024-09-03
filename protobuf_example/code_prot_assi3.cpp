#include<iostream>
#include "g_proto_e3.pb.h"
using namespace std;


int main(){
    citiesData::stateData s;
    citiesData::cityData* c1 = s.add_cities();
    c1->set_statename("gujarat");
    c1->set_cityname("ahmedabad");
    citiesData::cityData* c2 = s.add_cities();

     c2->set_statename("rajasthan");
    c2->set_cityname("udaipur");

    for(int i=0;i<s.cities_size();++i){
        const citiesData::cityData& c = s.cities(i);
        cout << "Data " << i+1 << endl;
        cout << "state name: " << c.statename() <<  endl;
                // if(field == "cityname"){
        cout << "\ncity name: "<< c.cityname()  << "\n";

        /*DOES NOT HAVE HAS_CITYNAME , HAS_ADDRESS */
        // }
        // else if(field == "pincode")
        // {
        // cout << "\npincode: "<< c.pincode()  << "\n";

        // }
        // else if(field == "address"){
        // cout << "\naddress: "<< c.address()  << "\n";

        // }
        }
    return 0;
    }