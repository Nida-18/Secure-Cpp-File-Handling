#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string key = "K";
    ifstream in("enc.bin");
    ofstream out("dec.txt");
    char c;
    while(in.get(c)) out << char(c ^ key[0]);
}
