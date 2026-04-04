#include <iostream>
#include <string>

using namespace std;

int main() {
    // Wczytanie tekstu i wzorca od użytkownika
    string tekst, wzorzec;
    cout << "Podaj tekst: ";
    getline(cin, tekst);
    cout << "Podaj wzorzec: ";
    getline(cin, wzorzec);

    // Wyszukiwanie wzorca w tekście
    size_t pozycja = tekst.find(wzorzec);

    // Wyświetlenie wyniku
    if (pozycja != string::npos) {
        cout << "Znaleziono wzorzec!" << endl;
        cout << "Pozycja: " << pozycja << endl;
    } else {
        cout << "Wzorzec nie został znaleziony." << endl;
    }

    return 0;
}
