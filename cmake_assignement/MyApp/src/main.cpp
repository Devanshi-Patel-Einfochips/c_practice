#include<iostream>
#include "../../SharedLib/include/SharedHello.h" // Simplified include path
#include "../../StaticLib/include/staticHello.h"
using namespace std;

int main(){
    PrintStaticData();
    PrintSharedData();
    return 0;
}