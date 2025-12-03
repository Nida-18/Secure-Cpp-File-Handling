#include <iostream>
#include <fstream>
using namespace std;
// Vulnerable path traversal
int main(){
    string path;
    cout << "Enter file name: ";
    cin >> path;
    ifstream f(path);
    string data;
    getline(f, data);
    cout << data;
}
