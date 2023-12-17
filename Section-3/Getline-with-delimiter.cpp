#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string input;
    fstream nameFile;
    nameFile.open("data.txt",ios::in);
    if(nameFile){

         while(nameFile)
         {
             cout<<input<<endl;
             getline(nameFile, input, '$'); // $ this a delimiter
            
        }
         // Close the file.
        nameFile.close();
    }
    else{
        cout << "ERROR: Cannot open file.\n";
    }
    return 0;
}
