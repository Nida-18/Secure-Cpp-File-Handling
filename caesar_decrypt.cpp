#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int shift = 3;
    ifstream in("caesar.enc");
    ofstream out("caesar.dec");
    char c;
    while(in.get(c)) out << char(c - shift);
}
