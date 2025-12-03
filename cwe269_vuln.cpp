#include <iostream>
#include <fstream>
using namespace std;
// Vulnerable privilege override
int main(){
    string file;
    cout << "Enter file to write: ";
    cin >> file;
    ofstream f(file);
    f << "Unauthorized modification!";
}
