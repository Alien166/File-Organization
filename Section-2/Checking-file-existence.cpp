#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream dataFile;
    dataFile.open("values.txt", ios::in);
    if (dataFile.fail())
    {
        // The file does not exist, so create it.
        dataFile.open("values.txt",ios::out);
        
    }
    else {
         // The file already exists
        dataFile.close();
        cout << "The file values.txt already exists.\n";
    }
return 0;
}
