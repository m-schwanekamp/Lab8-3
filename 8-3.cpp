//Lab8-3
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;
int countWords(string str);

int main() {
    string input;
    string str;
    int words = 0;
    
    while (true) {
        cout << "Enter a string or Q to quit: ";
        getline(cin, input);
        if (input == "Q") break;
        words = countWords(input);
        cout << "Word count: " << words << endl;
    }
    return 0;
}

int countWords(string str) {
    int words = 0;
    int sentence_length = str.length();
    for (int i = 0; i < sentence_length; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ') {
            words++;
        }
    }
    words += 1;
    return words;

}
