//Lab8-3
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;
int countWords(string str);

int main () {
    string sentence;
    int words = 0;
    int lenOfSentence = sentence.size();
    
    cout << "Enter a string or Q to quit: ";
    if (cin >> sentence) {
        for (int i = 0; i < lenOfSentence; i++) {
            if (sentence[i] == ' ') {
                words++;
            }
        }
    
        words = words + 1;
        cout << "Word count: " << words << endl;
    }
    else return 0;
}