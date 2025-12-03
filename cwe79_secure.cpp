#include <iostream>
#include <fstream>
using namespace std;

string escape(const string &s){
    string out=""; 
    for(char c: s){
        switch(c){
            case '<': out += "&lt;"; break;
            case '>': out += "&gt;"; break;
            case '&': out += "&amp;"; break;
            case '"': out += "&quot;"; break;
            default: out += c;
        }
    }
    return out;
}

int main() {
    string input;
    cout << "Enter text: ";
    getline(cin, input);
    ofstream f("safe.html");
    f << "<html><body>User says: " << escape(input) << "</body></html>";
    return 0;
}
