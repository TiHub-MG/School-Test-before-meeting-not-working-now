// reading a text file
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    string line;
    ifstream myfile(argv[1]);
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            cout << stoi(line)+10 << '\n'; // char+10
        }
        myfile.close();
    } else cout << "Unable to open file";

    return 0;
}