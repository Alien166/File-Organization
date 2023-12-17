#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    char ch; // To hold a character
    fstream dataFile;
    dataFile.open("data2.txt", ios::out);
        while (ch != '.')
        {
            dataFile.put(ch);
            cin.get(ch);
        }
        dataFile.close();
        return 0;
}

