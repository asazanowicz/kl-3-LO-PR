#include <iostream>
#include <string>

using namespace std;

int main() {
    // Wczytanie wzorca i tekstu od użytkownika
    string wzorzec, tekst;
    cout << "Podaj wzorzec: ";
    getline(cin, wzorzec);
    cout << "Podaj tekst: ";
    getline(cin, tekst);

    // Zliczanie wystąpień wzorca w tekście
    int licznik = 0;
    size_t pozycja = 0;
    while ((pozycja = tekst.find(wzorzec, pozycja)) != string::npos) {
        licznik++;
        pozycja += wzorzec.length();
    }

    // Wyświetlenie wyniku
    if (licznik > 1) {
        cout << "Słowo powtórzyło się więcej niż raz (" << licznik << " razy)." << endl;
    } else if (licznik == 1) {
        cout << "Słowo wystąpiło dokładnie raz." << endl;
    } else {
        cout << "Słowo nie zostało znalezione." << endl;
    }

    return 0;
}
