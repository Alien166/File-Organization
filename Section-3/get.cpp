#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    char ch; // To hold a character
    fstream file;
    file.open("data2.txt", ios::in);
    // If the file was successfully opened, continue. if (file)
    if(file) {
        while (file)
        {
            file.get(ch);
            cout << ch;
        }
        file.close();
    }
    else {
        cout << "file could not be opened.\n";
    }
        return 0;
}

