#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string userInput;

    cout << "Enter text to write into the HTML file: ";
    getline(cin, userInput);

    ofstream fout("comments.txt");
    fout << userInput;
    fout.close();

    ofstream htmlout("vulnerable79.html");
    ifstream fin("comments.txt");
    string comment;

    htmlout << "<html><body>\n";
    while (getline(fin, comment)){
        htmlout << "<p>" << comment << "</p>\n";

    }
    htmlout << "</body></html>";
    fin.close();
    htmlout.close();

    cout << "Data written to vulnerable79.html" << endl;
    return 0;
}

