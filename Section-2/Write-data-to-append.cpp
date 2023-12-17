#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream dataFile;
    cout << "Opening file...\n";
    // Open the file in output mode.
    dataFile.open("demofile.txt", ios::out);
    cout << "Now writing data to the file.\n";
    dataFile << "Jones\n";
    dataFile << "Smith\n";
    cout << "Now closing the file.\n";
    dataFile.close(); // Close the file
    
    // Open the file in append mode.
    cout << "Opening the file again...\n";
    dataFile.open("demofile.txt", ios::out | ios::app);
    cout << "Writing more data to the file.\n";
    dataFile << "Willis\n"; // Write Line 3
    dataFile << "Davis\n"; // Write Line 4
    cout << "Now closing the file.\n";
    dataFile.close(); // Close the file
    cout << "Done.\n";
    return 0;
}
