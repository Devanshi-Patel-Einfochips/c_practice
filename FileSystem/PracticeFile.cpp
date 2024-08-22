//ASSIGNMEN 2
#include <iostream>
#include <fstream>
#include <string>
#include <experimental/filesystem>
#include <iomanip>

using namespace std;
namespace fs = std::experimental::filesystem;

// Function to copy a file
void copyFile(const fs::path &source, const fs::path &dest) {
    // Open source file in binary mode
    ifstream srcFile(source, ios::binary);
    if (!srcFile) {
        cerr << "Failed to open source file: " << source << endl;
        return;
    }

    // Get file size
    streamsize fileSize = fs::file_size(source);
    char *buffer = new char[fileSize];

    // Read file content into buffer
    srcFile.read(buffer, fileSize);
    if (!srcFile) {
        cerr << "Failed to read from source file: " << source << endl;
        delete[] buffer;
        return;
    }

    // Open destination file in binary mode
    ofstream destFile(dest, ios::binary | ios::out);
    if (!destFile) {
        cerr << "Failed to open destination file: " << dest << endl;
        delete[] buffer;
        return;
    }

    // Write buffer to destination file
    destFile.write(buffer, fileSize);
    if (!destFile) {
        cerr << "Failed to write to destination file: " << dest << endl;
    }

    // Show progress
    cout << "Copied: " << source << " to " << dest 
         << " (" << setprecision(2) << fixed 
         << (100.0 * srcFile.gcount() / fileSize) << "%)" << endl;

    // Clean up
    delete[] buffer;
    srcFile.close();
    destFile.close();
}

// Function to recursively copy a directory
void copyDirectory(const fs::path &sourceDir, const fs::path &destDir) {
    // Create the destination directory if it doesn't exist
    if (!fs::exists(destDir)) {
        fs::create_directories(destDir);
    }

    // Iterate through each item in the source directory
    for (const auto &entry : fs::directory_iterator(sourceDir)) {
        const auto &sourcePath = entry.path();
        auto destPath = destDir / sourcePath.filename();

        if (fs::is_directory(sourcePath)) {
            // Recursively copy sub-directory
            copyDirectory(sourcePath, destPath);
        } else if (fs::is_regular_file(sourcePath)) {
            // Copy file
            copyFile(sourcePath, destPath);
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        cerr << "Usage: " << argv[0] << " <source> <destination>" << endl;
        return 1;
    }
    cout << "aa" << argv[1] << argv[2] << endl;

    fs::path sourcePath = argv[1];
    fs::path destPath = argv[2];

    // Check if source exists
    if (!fs::exists(sourcePath)) {
        cerr << "Source path does not exist: " << sourcePath << endl;
        return 1;
    }

    if (fs::is_directory(sourcePath)) {
        // If the source is a directory, copy the directory
        copyDirectory(sourcePath, destPath);
    } else if (fs::is_regular_file(sourcePath)) {
        // If the source is a file, copy the file
        if (fs::exists(destPath) && fs::is_directory(destPath)) {
            destPath /= sourcePath.filename();
        }
        copyFile(sourcePath, destPath);
    } else {
        cerr << "Unsupported file type: " << sourcePath << endl;
        return 1;
    }

    cout << "Copy operation completed successfully." << endl;
    return 0;
}
