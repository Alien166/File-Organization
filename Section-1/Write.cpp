#include <iostream>
#include <fstream>
using namespace std ;
int main() {
    fstream myFile;
    myFile.open("File.txt" , ios::out);
    if(!myFile) {
        cout<<"file Not Created";
    } else {
        cout<<"File Created Successfully";
        myFile<<"Welcome 2myGithub "
        myFile.close();
    }
    return 0;
}
