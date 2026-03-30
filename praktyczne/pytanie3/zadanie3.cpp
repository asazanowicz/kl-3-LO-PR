#include <iostream>
#include <string>

using namespace std;

int main() {
    // Hasło zapisane w programie
    string prawidloweHaslo = "Informatyka20!";
    string podaneHaslo;
    
    // Wczytanie hasła od użytkownika
    cout << "Podaj hasło: ";
    cin >> podaneHaslo;
    
    // Porównanie haseł i wyświetlenie komunikatu
    if (podaneHaslo == prawidloweHaslo) {
        cout << "Dostęp przyznany." << endl;
    } else {
        cout << "Błędne hasło." << endl;
    }
    
    return 0;
}
