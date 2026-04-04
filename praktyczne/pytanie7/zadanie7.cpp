#include <iostream>
#include <string>

using namespace std;

int main() {
    const int N = 10;
    string imiona[N];

    // Wczytanie 10 imion od użytkownika
    cout << "Podaj 10 imion:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Imię " << (i + 1) << ": ";
        cin >> imiona[i];
    }

    // Wypisanie imion zaczynających się na 'K'
    cout << "Imiona zaczynające się na 'K':" << endl;
    for (int i = 0; i < N; i++) {
        if (imiona[i][0] == 'K') {
            cout << imiona[i] << endl;
        }
    }

    return 0;
}
