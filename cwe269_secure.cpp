#include <iostream>
#include <filesystem>
#include <fstream>
using namespace std;
namespace fs = std::filesystem;

int main(){
    string filename;
    cout << "Enter user-editable file: ";
    cin >> filename;

    fs::path base = fs::absolute("user_files");
    fs::path target = fs::absolute(base / filename);

    if(target.string().rfind(base.string(), 0) == 0){
        ofstream f(target);
        f << "User data written safely.";
    } else {
        cout << "Not allowed.";
    }
}
