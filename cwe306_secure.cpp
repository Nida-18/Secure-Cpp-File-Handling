#include <iostream>
#include <cstdio>
using namespace std;

bool auth(){
    string pwd;
    cout << "Enter password: ";
    cin >> pwd;
    return pwd == "admin123";
}

int main(){
    string file;
    if(!auth()){
        cout << "Access denied!";
        return 0;
    }
    cout << "Enter file to delete: ";
    cin >> file;
    remove(file.c_str());
}
