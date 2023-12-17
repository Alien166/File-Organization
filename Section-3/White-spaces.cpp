#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string input;
    fstream nameFile;
   // Open the file in input mode.
    nameFile.open("data.txt",ios::in);
    if(nameFile) {
      // Read the file contents.
        while (nameFile >> input)
        {
            cout << input;
        }
      // Close the file.
        nameFile.close();
    }
    else
    {
        cout << "ERROR: Cannot open file.\n";
    }
    return 0;
}
