#include <iostream>
#include <string>

using namespace std;

string removeCharAtIndex(const string& s, int index) {
    if (index >= 0 && index < s.length()) {
        return s.substr(0, index) + s.substr(index + 1);
    }
    return s;
}

string removeAllOccurrences(const string& s, char ch) {
    string result;
    for (char c : s) {
        if (c != ch) {
            result += c;
        }
    }
    return result;
}

string insertCharAtIndex(const string& s, char ch, int index) {
    if (index < 0 || index > s.length()) {
        return s;
    }
    return s.substr(0, index) + ch + s.substr(index); 
}

string replaceDotsWithExclamation(const string& s) {
    string result = s;
    for (char& c : result) {
        if (c == '.') {
            c = '!';
        }
    }
    return result;
}

int countOccurrences(const string& s, char ch) {
    int count = 0;
    for (char c : s) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    //1 task
    /*string text = "Hello world!";
    int indexToRemove = 7;
    string result = removeCharAtIndex(text, indexToRemove);
    cout << result << endl;*/

    //2 task
    /*string text = "Hello world!";
    char charToRemove = 'l';
    string result = removeAllOccurrences(text, charToRemove);
    cout << result << endl;*/

    //3 task
    /*string text = "Hello world!";
    char charToInsert = '6';
    int indexToInsert = 7;
    string result = insertCharAtIndex(text, charToInsert, indexToInsert);
    cout << result << endl;*/

    //4 task
    /*string userInput;
    getline(cin, userInput);
    string modifiedString = replaceDotsWithExclamation(userInput);
    cout << modifiedString << endl;*/

    //5 task
    /*string userInput;
    char charToFind;

    getline(cin, userInput);
    cin >> charToFind;

    int occurrences = countOccurrences(userInput, charToFind);
    cout << occurrences << endl;*/

    //6 task
    /*string userInput;
    int letterCount = 0, digitCount = 0, otherCount = 0;

    getline(cin, userInput); 

    for (char c : userInput) {
        if (isalpha(c)) {
            letterCount++;
        }
        else if (isdigit(c)) {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }

    cout << letterCount << endl;
    cout << digitCount << endl;
    cout << otherCount << endl;*/
}