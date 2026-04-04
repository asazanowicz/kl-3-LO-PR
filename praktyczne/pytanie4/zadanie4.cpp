#include <iostream>
#include <string>

using namespace std;

int main() {
    // Wczytanie imienia od użytkownika
    string imie;
    cout << "Podaj imię: ";
    cin >> imie;

    // Wyświetlenie imienia w postaci schodkowej
    for (int i = 1; i <= (int)imie.length(); i++) {
        cout << imie.substr(0, i) << endl;
    }

    return 0;
}
