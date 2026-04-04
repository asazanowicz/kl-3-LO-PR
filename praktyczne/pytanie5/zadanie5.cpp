#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    const int N = 5;
    string wyrazy[N];

    // Wczytanie 5 wyrazów od użytkownika
    cout << "Podaj 5 wyrazów:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Wyraz " << (i + 1) << ": ";
        cin >> wyrazy[i];
    }

    // Sortowanie alfabetyczne
    sort(wyrazy, wyrazy + N);

    // Wyświetlenie posortowanych wyrazów
    cout << "Wyrazy posortowane alfabetycznie:" << endl;
    for (int i = 0; i < N; i++) {
        cout << wyrazy[i] << endl;
    }

    return 0;
}
