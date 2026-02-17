#include <iostream>
#include <fstream>
using namespace std;

/**
 * Copies a text file character-by-character.
 * @param filenamein  The source file name.
 * @param filenameout The destination file name.
 * @return true if copy is successful, false otherwise.
 */

bool Copy(char filenamein[], char filenameout[]) {
    ifstream inputFile(filenamein, ios::in);   // Open for reading
    if (!inputFile) { // Check if input file exists
        cerr << "Error: Could not open source file '" << filenamein << "'\n";
        return false;
    }

    ofstream outputFile(filenameout, ios::out); // Open for writing
    if (!outputFile) { // Check if output file can be created
        cerr << "Error: Could not create output file '" << filenameout << "'\n";
        return false;
    }

    char ch;
    while (inputFile.get(ch)) { // Read one character at a time
        outputFile.put(ch);     // Write character to output file
    }

    if (inputFile.bad() || outputFile.bad()) {
        cerr << "Error: File read/write error occurred.\n";
        return false;
    }

    inputFile.close();
    outputFile.close();
    return true;
}

int main(int argn, char* argv[])
{
    if (argn != 3) {
        cerr << "Usage: " << argv[0] << " <input filename> <output filename>" << endl;
        int keypress; cin >> keypress;
        return -1;
    }

    if (Copy(argv[1], argv[2]))
    {
        cout << "Copy successful" << endl;
    }
    else
    {
        cout << "Copy error" << endl;
    }

    system("PAUSE");
}