
#include <iostream>
#include <fstream>
#include <string>
#include<cstring>
struct Record {
	int id;
	char name[10];
};
void WriteRecord(Record *p) {
	std::ofstream binstream{ "records", std::ios::binary | std::ios::out };
	binstream.write((const char *)p, sizeof(Record));
}
Record GetRecord() {
	std::ifstream input{ "records", std::ios::binary | std::ios::in };
	Record r;
	input.read((char*)&r, sizeof(Record));
	return r;
}
int main() {
	Record r;
	r.id = 1001;
    strncpy(r.name, "DEVS", 10);
        r.name[9] = '\0'; // Ensure null termination if the string is exactly 10 characters long

	WriteRecord(&r);

	Record r2 = GetRecord();
	std::cout << r2.id << ":" << r2.name << std::endl; 


	return 0;
}