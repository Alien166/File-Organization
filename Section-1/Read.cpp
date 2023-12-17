#include <iostream>
#include <fstream>
using namespace std ;
int main() {
    fstream myFile;
    myFile.open("File.txt" , ios::in);
    if(!myFile) {
        cout<<"file Not Created";
    } else {
        char ch;
        while(1) {
            myFile>>ch;
            if(myFile.eof())
                break;
            cout<<ch;
        }
    }
    myFile.close();
    return 0;
}
