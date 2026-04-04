#include <iostream>
#include <string>

using namespace std;

int main() {
    // Wczytanie dwóch wyrazów od użytkownika
    string wyraz1, wyraz2;
    cout << "Podaj pierwszy wyraz: ";
    cin >> wyraz1;
    cout << "Podaj drugi wyraz: ";
    cin >> wyraz2;

    // Połączenie wyrazów w odwrotnej kolejności (drugi + pierwszy)
    string wynik = wyraz2 + wyraz1;

    // Wyświetlenie wyniku
    cout << "Wynik: " << wynik << endl;

    return 0;
}
