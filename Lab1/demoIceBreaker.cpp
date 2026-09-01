#include<iostream>
#include<fstream>

using namespace std;

/**
 * @brief reads out the contents of the filename
 * 
 * @param filename :string 
 */
void readFile(string filename, vector<string> & vec) {

   ifstream inputFile(filename);

    //error handling
    if (!inputFile.is_open()) {
        cerr << "Error: Could not open file\n";
        return;
    }

    string line;

    while (getline(inputFile, line)) {
        vec.push_back(line);
    }

    inputFile.close();
    return;
}

/**
 * @brief prompts the user to give a file to read
 * 
 */
void promptFile(vector<string> & v){
    cout << "file to read?\n";
    string myFile = "";
    cin >> myFile;
    readFile(myFile, v);
}

void ranGen(){
    srand(time(nullptr));
    int randomNumber = rand() % 6;  // 0 through 5
    cout << randomNumber << endl;
}

void printVec(vector<string> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
}
int main()
{
    vector<string> roster;
    promptFile(roster);
    printVec(roster);


}