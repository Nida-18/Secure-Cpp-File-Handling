#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string userInput;

    cout << "Enter text to write into the HTML file: ";
    getline(cin, userInput);

    ofstream f("vulnerable79.html");
    f << "<html><body> User Say " << userInput << "</body></html>";

    cout << "Data written to vulnerable79.html" << endl;
    return 0;
}

