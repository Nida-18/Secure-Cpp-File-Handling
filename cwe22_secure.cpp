#include <iostream>
#include <filesystem>
#include <fstream>
using namespace std;
namespace fs = std::filesystem;

int main(){
    string filename;
    cout << "Enter file name: ";
    cin >> filename;

    fs::path base = fs::absolute("safe_dir");
    fs::path target = fs::absolute(base / filename);

    if (target.string().rfind(base.string(), 0) == 0){
        ifstream f(target);
        string s; getline(f,s);
        cout << s;
    } else {
        cout << "Access denied!";
    }
}
