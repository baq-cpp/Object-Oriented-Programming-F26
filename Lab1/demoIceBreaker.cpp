#include<iostream>
#include<fstream>

using namespace std;

/**
 * @brief reads out the contents of the filename
 * 
 * @param filename :string 
 */
void readFile(string filename) {

   ifstream inputFile(filename);

    //error handling
    if (!inputFile.is_open()) {
        cerr << "Error: Could not open file\n";
        return;
    }

    string line;

    while (getline(inputFile, line)) {
        cout << line << '\n';
    }

    inputFile.close();
    return;
}

/**
 * @brief prompts the user to give a file to read
 * 
 */
void promptFile(){
    cout << "file to read?\n";
    string myFile = "";
    cin >> myFile;
    readFile(myFile);
}
int main()
{
    promptFile();

}