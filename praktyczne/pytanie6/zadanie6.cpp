#include <iostream>
#include <string>

using namespace std;

int main() {
    // Wczytanie zdania od użytkownika
    string zdanie;
    cout << "Podaj zdanie: ";
    getline(cin, zdanie);

    // Zliczanie wystąpień litery 'a' i 'A'
    int licznik = 0;
    for (int i = 0; i < (int)zdanie.length(); i++) {
        if (zdanie[i] == 'a' || zdanie[i] == 'A') {
            licznik++;
        }
    }

    // Wyświetlenie wyniku
    cout << "Liczba wystąpień litery 'a' (małej i wielkiej): " << licznik << endl;

    return 0;
}
