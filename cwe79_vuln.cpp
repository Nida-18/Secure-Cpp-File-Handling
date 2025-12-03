#include <iostream>
#include <fstream>
using namespace std;
// Vulnerable: writes user input directly to HTML
int main() {
    string input;
    cout << "Enter text: ";
    getline(cin, input);
    ofstream f("output.html");
    f << "<html><body>User says: " << input << "</body></html>";
    return 0;
}
