#include <iostream>
#include <map>
#include <string>
#include <tuple>

using namespace std;

void wypisz(string sala[8][10]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 10; j++) {
            cout << sala[i][j] << " ";
        }
    }
    cout << endl;
}

int main() {
    string sala[8][10] = {
        {"DTP", "GOO", "HUA", "KUL", "PL", "AGH", "PG", "AGH", "PG", "AGH"},
        {"PM", "PS", "UAM", "UG", "UR", "ZUT", "UR", "ZUT", "SGGW", "PWR"},
        {"PO", "NLU", "PG", "NLU", "PG", "PW", "AGH", "PW", "AGH", "PW"},
        {"UW", "UJ", "UW", "UJ", "UW", "UJ", "UW", "UJ", "UW", "UJ"},
        {"UMK", "MAP", "UMCS", "MAP", "UWR", "MAP", "UWR", "MAP", "UWR", "MAP"},
        {"UW", "UJ", "UW", "UJ", "UW", "UJ", "UW", "UJ", "UW", "UO"},
        {"MAP", "UWR", "MAP", "UWR", "PW", "UWR", "PW", "UWR", "PW", "UWR"},
        {"UW", "UMCS", "WAT", "NLU", "PUT", "PO", "PUT", "PWR", "PUT", "SGGW"},
    };

    map<string, tuple<int, int>> pozycje = {
        {"DTP", make_tuple(0, 0)}, {"GOO", make_tuple(0, 1)},  {"HUA", make_tuple(0, 2)},
        {"KUL", make_tuple(0, 3)}, {"PL", make_tuple(0, 4)},   {"AGH", make_tuple(0, 5)},
        {"PG", make_tuple(0, 6)},  {"PM", make_tuple(1, 0)},   {"PS", make_tuple(1, 1)},
        {"UAM", make_tuple(1, 2)}, {"UG", make_tuple(1, 3)},   {"UR", make_tuple(1, 4)},
        {"ZUT", make_tuple(1, 5)}, {"PO", make_tuple(2, 0)},   {"NLU", make_tuple(2, 1)},
        {"PW", make_tuple(2, 5)},  {"UW", make_tuple(3, 0)},   {"UJ", make_tuple(3, 1)},
        {"UMK", make_tuple(4, 0)}, {"MAP", make_tuple(4, 1)},  {"UMCS", make_tuple(4, 2)},
        {"UWR", make_tuple(4, 4)}, {"UO", make_tuple(5, 9)},   {"WAT", make_tuple(6, 2)},
        {"PUT", make_tuple(7, 4)}, {"SGGW", make_tuple(7, 9)},
    };

    string faworyt;
    cin >> faworyt;

    tuple<int, int> pozycja_faworyta = pozycje[faworyt];
    string team_pierwszy = sala[0][0];

    sala[get<0>(pozycja_faworyta)][get<1>(pozycja_faworyta)] = team_pierwszy;
    sala[0][0] = faworyt;

    wypisz(sala);
    return 0;
}
