#include<string>
#include<iostream>
#include<fstream>
// #include<ofstream>
// #include <ifstream>
#include<experimental/filesystem>
using namespace std;
 

 int main(){
using namespace std:: experimental:: filesystem;
    path source(current_path());
    source /= "binCpyUtil.cpp";

    path dest(current_path());
    dest /= "binCpyUtildest.cpp";
 if (!exists(source)) {
        cerr << "Source file does not exist." << endl;
        return 1;
    }

        if (exists(dest)) {
        cerr << "Destination file already exists. Copy operation aborted." << endl;
        return 1;
    }

    ifstream binfile{source, ios::binary | ios ::out};
    streamsize fileSize = file_size(source);

    //   streamsize fileSize = binfile.tellg();
    // binfile.seekg(0, ios::beg);
    // cout << "filesize: " << fileSize <<  endl;   
    //  cout << binfile.tellg() <<  endl;

    char *buffer = new char[fileSize];
    binfile.read(buffer, fileSize);
        if (!binfile) {
        cerr << "Failed to read the entire source file." << endl;
        delete[] buffer;
        return 1;
    }

    binfile.close();

    ofstream outBinFile{dest, ios:: binary | ios:: out};

     if (!outBinFile) {
        cerr << "Failed to open destination file." << endl;
        delete[] buffer;
        return 1;
    }
    outBinFile.write(buffer,fileSize);

    if (!outBinFile) {
        cerr << "Failed to write to the destination file." << endl;
        delete[] buffer;
        return 1;
    }

    outBinFile.close(); 
     
delete []buffer;
    cout << "File copied successfully!" << endl;

    return 0;
 }