#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    
    int count = 0;
    int i = 0;
    
    while (i < word.length()) {
        if (i + 2 < word.length() && word.substr(i, 3) == "dz=") {
            count++;
            i += 3;
        }
        else if (i + 1 < word.length() && (word.substr(i, 2) == "c=" || word.substr(i, 2) == "c-" || word.substr(i, 2) == "d-" || word.substr(i, 2) == "lj" || word.substr(i, 2) == "nj" || word.substr(i, 2) == "s=" || word.substr(i, 2) == "z=")) {
            count++;
            i += 2;
        }
        else {
            count++;
            i++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
