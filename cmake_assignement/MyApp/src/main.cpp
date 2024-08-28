#include<iostream>
#include <SharedHello.h> // Simplified include path
#include "../staticHello.h"
using namespace std;

int main(){
    PrintStaticData();
    printsharedData();
    return 0;
}