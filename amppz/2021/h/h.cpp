#include <iostream>
#include <string>

using namespace std;

char cezar(char& c) { return ((c - 'a') + 13) % 26 + 'a'; }

int main() {
    int z = 0;

    cin >> z;

    for (int i = 0; i < z; i++) {
        string word;
        cin >> word;

        for (int j = 0; j < word.length(); ++j) {
            cout << cezar(word[j]);
        }

        cout << endl;
    }
}
