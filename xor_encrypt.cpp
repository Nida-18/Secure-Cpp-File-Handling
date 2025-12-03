#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string key = "K";
    ifstream in("input.txt");
    ofstream out("enc.bin");
    char c;
    while(in.get(c)) out << char(c ^ key[0]);
}
