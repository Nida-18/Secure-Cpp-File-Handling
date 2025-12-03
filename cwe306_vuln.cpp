#include <iostream>
#include <cstdio>
using namespace std;
// Vulnerable: no authentication
int main(){
    string file;
    cout << "Enter file to delete: ";
    cin >> file;
    remove(file.c_str());
}
