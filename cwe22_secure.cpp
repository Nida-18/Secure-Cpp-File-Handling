#include <iostream>
#include <filesystem>
#include <fstream>
using namespace std;
namespace fs = std::filesystem;

int main() {
    string filename;
    cout << "Enter file name: ";
    cin >> filename;

    fs::path base = fs::canonical("safe_dir");  // secure absolute base
    fs::path target;

    try {
        target = fs::canonical(base / filename); // canonicalize user input
    } catch (...) {
        cerr << "Invalid path!";
        return 1;
    }

    // Check using lexically relative path
    if (std::mismatch(base.begin(), base.end(), target.begin()).first == base.end()) {
        ifstream f(target);
        if (!f.is_open()) {
            cerr << "Could not open file.";
            return 1;
        }
        string s; 
        getline(f, s);
        cout << s;
    } else {
        cerr << "Access denied!";
    }
}

