#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int shift = 3;
    ifstream in("plain.txt");
    ofstream out("caesar.enc");
    char c;
    while(in.get(c)) out << char(c + shift);
}
