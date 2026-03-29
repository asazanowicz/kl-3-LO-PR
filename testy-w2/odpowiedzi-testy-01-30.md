# Odpowiedzi – Test W2 Informatyka Klasa 3 LO (Pytania 1–30)

---

## Pytanie 1
**Wyjaśnij zasadę działania sortowania szybkiego (Quick Sort).**

Quick Sort opiera się na technice **dziel i zwyciężaj** (divide and conquer). Został opracowany w 1960 roku przez Tony'ego Hoare'a.

**Zasada działania:**
1. Wybieramy element zwany **pivotem** (osią podziału)
2. Dzielimy zbiór na dwie części: elementy **mniejsze od pivota** i **większe od pivota**
3. Rekurencyjnie sortujemy obie części
4. Łączymy posortowane części

**Przykład:** Dla tablicy [7, 2, 1, 8, 6, 3, 5, 4]:
- pivot = 4
- mniejsze/równe: [2, 1, 3]
- większe: [7, 8, 6, 5]
- po sortowaniu rekurencyjnym → [1, 2, 3, 4, 5, 6, 7, 8]

**Złożoność:** Średnio O(n log n), w najgorszym przypadku O(n²).

**Zalety:** Bardzo szybki w praktyce, nie wymaga dodatkowej pamięci.
**Wady:** Niestabilny, w najgorszym przypadku wolniejszy niż Merge Sort.

---

## Pytanie 2
**Omów poniższe instrukcje języka C++ oraz zdefiniuj jakiego algorytmu mogą one dotyczyć.**

*(Pytanie odnosi się do kodu z załącznika – bez kodu widocznego w pliku tekstowym)*

Typowe instrukcje algorytmów sortowania w C++ to:
- **Pętle `for`/`while`** – iterowanie po elementach tablicy
- **Instrukcja warunkowa `if`** – porównywanie elementów
- **Zamiana elementów `swap()`** – przenoszenie elementów na właściwe pozycje
- **Funkcje rekurencyjne** – wywołanie funkcji przez samą siebie (charakterystyczne dla Quick Sort)
- **Operacja `tab[j+1] = tab[j]`** – przesuwanie elementów (charakterystyczne dla Insertion Sort)

Jeśli kod zawiera pivot i rekurencję → **Quick Sort**. Jeśli zawiera porównywanie sąsiednich elementów → **Bubble Sort**. Jeśli zawiera przesuwanie i wstawianie → **Insertion Sort**.

---

## Pytanie 3
**W jaki sposób algorytmy sortujące mogą wpływać na wydajność programów?**

Algorytmy sortujące wpływają na wydajność programów, ponieważ **uporządkowane dane pozwalają na szybsze wyszukiwanie i przetwarzanie**:

- **Wyszukiwanie binarne** (O(log n)) wymaga posortowanych danych, zamiast sekwencyjnego (O(n))
- Bazy danych stają się bardziej czytelne i szybsze
- Wyniki wyszukiwania w Internecie mogą być wyświetlane trafniej
- W grach komputerowych sortowanie obiektów przyspiesza renderowanie scen

**Wybór algorytmu ma znaczenie:**
- Sortowanie bąbelkowe O(n²) – wolne dla dużych zbiorów
- Quick Sort O(n log n) – szybkie w praktyce
- Sortowanie kubełkowe O(n) – przy równomiernym rozkładzie

Nie ma jednego najlepszego algorytmu – w zależności od sytuacji stosuje się różne metody. Często stosuje się algorytmy **hybrydowe**, łączące różne metody.

---

## Pytanie 4
**Dlaczego wybór złego pivota może pogorszyć działanie Quick Sorta?**

Wydajność Quick Sortu zależy bezpośrednio od **wyboru pivota**:

- **Dobry pivot** dzieli tablicę na dwie **mniej więcej równe części**, co daje złożoność O(n log n)
- **Zły pivot** (np. zawsze najmniejszy lub największy element) powoduje, że jedna część jest pusta, a druga zawiera prawie wszystkie elementy → złożoność spada do **O(n²)**

**Najgorszy przypadek:** Gdy tablica jest już posortowana, a jako pivot zawsze wybieramy pierwszy lub ostatni element – każdy podział tworzy jedną pustą i jedną pełną partycję. Zamiast log n poziomów rekurencji, mamy n poziomów.

**Rozwiązania:**
- Wybór pivota jako **elemento środkowego**
- Wybór **losowego** pivota
- Metoda **mediany z trzech** (pierwszy, środkowy, ostatni element)

Dlatego w praktyce zaleca się unikanie skrajnych elementów jako pivota.

---

## Pytanie 5
**Jak można zaimplementować sortowanie przez wstawianie w języku C++?**

Sortowanie przez wstawianie wstawia każdy element na właściwe miejsce w posortowanej części tablicy:

```cpp
void insertionSort(int tab[], int n) {
    for (int i = 1; i < n; i++) {
        int klucz = tab[i];
        int j = i - 1;
        while (j >= 0 && tab[j] > klucz) {
            tab[j + 1] = tab[j];
            j--;
        }
        tab[j + 1] = klucz;
    }
}
```

**Przykład:** Dla tablicy {9, 5, 1, 4, 3}:
1. 5 z 9 → {**5**, 9, 1, 4, 3}
2. 1 → {**1**, 5, 9, 4, 3}
3. 4 → {1, **4**, 5, 9, 3}
4. 3 → {1, **3**, 4, 5, 9}

**Zalety:** Prosty, efektywny dla małych/prawie posortowanych zbiorów, stabilny.
**Wady:** O(n²) w najgorszym przypadku.

---

## Pytanie 6
**Jakie są pierwsze cztery liczby ciągu Fibonacciego?**

Pierwsze cztery liczby ciągu Fibonacciego to: **0, 1, 1, 2**.

Każdy wyraz to suma dwóch poprzednich: F(n) = F(n-1) + F(n-2), gdzie F(0) = 0, F(1) = 1.

Dalsze wyrazy: 0, 1, 1, 2, **3, 5, 8, 13, 21, 34, 55, 89, 144...**

---

## Pytanie 7
**Gdzie w przyrodzie można spotkać ciąg Fibonacciego?**

Ciąg Fibonacciego występuje w przyrodzie w wielu formach:

- **Układ płatków kwiatów** – liczba płatków często odpowiada liczbom Fibonacciego (3, 5, 8, 13)
- **Muszle ślimaków** – spirale wpisują się w złotą spiralę
- **Rozgałęzienia drzew** – schematy rozgałęzień odpowiadają wyrazom ciągu
- **Układ liści na łodydze (filotaksja)** – liście rozmieszczone w proporcjach Fibonacciego
- **Kształty huraganów** – spiralne formy odpowiadają złotej spirali
- **Układ nasion słonecznika** – spirale w dwóch kierunkach tworzą kolejne liczby Fibonacciego

---

## Pytanie 8
**Jaka jest wartość tzw. "złotej proporcji"? (podaj w przybliżeniu)**

Złota proporcja (złota liczba, φ – phi) wynosi w przybliżeniu **φ ≈ 1,618**.

Jeżeli podzielimy kolejne wyrazy ciągu Fibonacciego (np. 89/55, 144/89, 233/144), otrzymamy coraz lepsze przybliżenie liczby φ. Wraz z rosnącymi wyrazami stosunek zbliża się do wartości granicznej φ.

Złota proporcja pojawia się w:
- **Przyrodzie** – układ płatków, muszle, spirale
- **Architekturze** – Partenon, Tadż Mahal
- **Grafice i projektowaniu** – logotypy Apple, National Geographic

---

## Pytanie 9
**Jakie operacje są podstawą sortowania przez wstawianie?**

Podstawowe operacje to:

1. **Porównywanie** – analizowany element porównywany z elementami posortowanej części
2. **Przesuwanie** – większe elementy przesuwane o jedną pozycję w prawo
3. **Wstawianie** – element umieszczany na właściwej pozycji

Algorytm bierze kolejny element z nieposortowanej części, porównuje go z elementami w posortowanej części (od prawej do lewej), przesuwa większe elementy i wstawia na odpowiednie miejsce. Proces powtarza się dla każdego elementu.

---

## Pytanie 10
**Wyjaśnij na czym polega sortowanie kubełkowe?**

**Sortowanie kubełkowe (Bucket Sort)** polega na rozdzieleniu danych na grupy (kubełki) według wartości, posortowaniu każdego kubełka osobno, a następnie scaleniu wyników.

**Kroki algorytmu:**
1. **Podział na kubełki** – tworzona jest określona liczba pustych kubełków, każdy element przypisywany jest do kubełka na podstawie swojej wartości
2. **Sortowanie kubełków** – elementy w każdym kubełku sortowane indywidualnie (np. Insertion Sort)
3. **Scalanie wyników** – kubełki łączone w jedną posortowaną listę

**Przykład:** Dla danych [0.78, 0.17, 0.39, 0.26] z zakresu [0, 1):
- kubełek 1: [0.17] → kubełek 2: [0.26] → kubełek 3: [0.39] → kubełek 7: [0.78]

**Złożoność:** O(n) przy równomiernym rozkładzie danych.
**Wada:** Nie nadaje się do danych o dużym rozrzucie lub nierównomiernym rozkładzie. Wymaga wiedzy o zakresie danych.

---

## Pytanie 11
**Które instrukcje są typowe dla algorytmów sortowania w Pythonie?**

Typowe instrukcje stosowane w algorytmach sortowania w Pythonie:

- **Pętla `for`** – iteracja po elementach listy: `for i in range(n):`
- **Pętla `while`** – powtarzanie z warunkiem: `while j >= 0 and lista[j] > klucz:`
- **Instrukcja warunkowa `if`** – porównywanie elementów: `if lista[j] > lista[j+1]:`
- **Zamiana elementów** – wielokrotne przypisanie: `lista[j], lista[j+1] = lista[j+1], lista[j]`
- **Funkcja `len()`** – pobranie długości listy
- **Metoda `.sort()`** – wbudowane sortowanie listy
- **Metoda `.append()`** – dodawanie elementu do listy
- **Funkcja `range()`** – generowanie zakresu indeksów

---

## Pytanie 12
**Porównaj sposób działania sortowania kubełkowego i bąbelkowego w języku Python. Które struktury danych są wykorzystywane w każdym z nich?**

| Cecha | Sortowanie kubełkowe | Sortowanie bąbelkowe |
|---|---|---|
| **Zasada** | Podział na kubełki → sortowanie → scalanie | Porównywanie sąsiednich elementów i zamiana |
| **Złożoność** | O(n) przy równomiernym rozkładzie | O(n²) |
| **Struktury danych** | Lista list (kubełki to listy w liście) | Jedna lista/tablica |
| **Dodatkowa pamięć** | Wymaga (kubełki) | Nie wymaga (sortowanie „na miejscu") |
| **Zastosowanie** | Liczby rzeczywiste z określonego zakresu | Małe zbiory, nauka algorytmów |

**Sortowanie kubełkowe** wykorzystuje **listę list** (każdy kubełek to osobna lista):
```python
kubelki = [[] for _ in range(n)]
```

**Sortowanie bąbelkowe** operuje na **jednej liście**:
```python
for i in range(n):
    for j in range(0, n-i-1):
        if lista[j] > lista[j+1]:
            lista[j], lista[j+1] = lista[j+1], lista[j]
```

---

## Pytanie 13
**Jakie są zalety dynamicznego typowania Pythona przy pisaniu algorytmów, a jakie mogą być wady?**

**Zalety:**
- Szybsze prototypowanie – nie trzeba deklarować typów zmiennych
- Elastyczność – ta sama zmienna może przechowywać różne typy
- Mniej kodu – algorytmy są krótsze i bardziej czytelne
- Łatwiejsze uczenie się – fokus na logice, nie na typach

**Wady:**
- Błędy typów ujawniają się dopiero w czasie działania (nie przy kompilacji)
- Trudniejsze debugowanie przy dużych projektach
- Mniejsza wydajność – interpreter musi sprawdzać typy w runtime
- Brak jasności kodu – trudno określić typ zmiennej bez kontekstu

---

## Pytanie 14
**W jaki sposób Python wykonuje sortowanie kubełków w funkcji kubelki[i].sort()? Czy to sortowanie może się różnić od innych algorytmów? Od czego zależy jego dokładna implementacja?**

Metoda `.sort()` w Pythonie wykorzystuje algorytm **Timsort** – hybrydowy algorytm łączący sortowanie przez scalanie (Merge Sort) i sortowanie przez wstawianie (Insertion Sort).

- **Timsort** ma złożoność O(n log n) w najgorszym przypadku
- Jest **stabilny** (nie zmienia kolejności równych elementów)
- Doskonale radzi sobie z danymi częściowo posortowanymi

**Różnice:** Timsort może się różnić od ręcznie napisanego sortowania kubełkowego, bąbelkowego czy przez wstawianie pod względem wydajności i zachowania. Jego implementacja zależy od:
- Wersji interpretera Pythona (CPython, PyPy, Jython)
- Rozmiaru danych w kubełku
- Stopnia wstępnego uporządkowania danych

W praktyce `.sort()` jest zoptymalizowany i znacznie szybszy niż ręcznie napisane proste algorytmy sortowania.

---

## Pytanie 15
**Jakie cechy składni i semantyki języka Python wpływają na to, że algorytmy w tym języku można napisać znacznie krócej niż np. w C++?**

1. **Wyrażenia listowe** – tworzenie list w jednej linii: `[x**2 for x in range(10)]`
2. **Wielokrotne przypisania** – `a, b = b, a + b`
3. **Brak deklaracji typów** – nie trzeba pisać `int`, `float`, `string`
4. **Brak klamer `{}`** – bloki kodu definiowane przez wcięcia
5. **Wbudowane funkcje** – `sort()`, `len()`, `range()`, `min()`, `max()`
6. **Dynamiczne typowanie** – zmienne automatycznie przyjmują typ
7. **Funkcje anonimowe (lambda)** – krótkie funkcje w jednej linii

---

## Pytanie 16
**Na czym polega sortowanie przez porównywanie sąsiednich elementów i jak można je zaimplementować w Pythonie?**

Jest to **sortowanie bąbelkowe (Bubble Sort)** – wielokrotne przechodzenie przez listę i porównywanie par sąsiednich elementów. Jeśli lewy jest większy od prawego, zamieniamy je miejscami.

```python
def bubble_sort(lista):
    n = len(lista)
    for i in range(n):
        for j in range(0, n - i - 1):
            if lista[j] > lista[j + 1]:
                lista[j], lista[j + 1] = lista[j + 1], lista[j]
    return lista
```

**Kroki:**
1. Przechodzimy przez listę od początku do końca
2. Porównujemy sąsiednie elementy
3. Zamieniamy miejscami, jeśli w złej kolejności
4. Największy element trafia na koniec
5. Powtarzamy aż brak zamian

Złożoność: O(n²). Prosty i intuicyjny, idealny do nauki.

---

## Pytanie 17
**Co to jest lista w języku Python?**

Lista w Pythonie to **dynamiczna, uporządkowana struktura danych**, która może przechowywać wiele elementów różnych typów (heterogeniczna). Tworzy się ją za pomocą nawiasów kwadratowych:

```python
liczby = [3, 1, 4, 1, 5]
mieszana = [1, "tekst", 3.14, True]
```

Listy obsługują: indeksowanie (od 0), wycinki, iterowanie w pętlach, a także metody: `append()`, `sort()`, `remove()`, `pop()`, `len()`.

---

## Pytanie 18
**Jak nazywa się polecenie w Pythonie, które powtarza czynności wiele razy?**

To **pętla** – Python oferuje dwa rodzaje:

- **`for`** – iteracja po elementach: `for i in range(5):`
- **`while`** – powtarzanie z warunkiem: `while i < 5:`

Pętla `for` z `range()` jest najczęściej stosowana w algorytmach sortowania.

---

## Pytanie 19
**W jakim celu w Pythonie sprawdza się warunek jeśli element1 > element2 podczas sortowania?**

Warunek `if element1 > element2` służy do **określenia, czy dwa elementy są w złej kolejności** i wymagają zamiany miejscami. Jest to podstawowa operacja w algorytmach sortowania:

```python
if lista[j] > lista[j + 1]:
    lista[j], lista[j + 1] = lista[j + 1], lista[j]
```

Dzięki temu porównaniu algorytm decyduje, czy elementy powinny zostać zamienione, aby zbliżyć się do prawidłowej kolejności. Dla sortowania **rosnącego** zamieniamy, gdy lewy > prawy. Dla **malejącego** – gdy lewy < prawy.

---

## Pytanie 20
**Jak Python porównuje elementy w liście? W jaki sposób sprawdza, który jest większy?**

Python porównuje elementy za pomocą **operatorów porównania**: `>`, `<`, `>=`, `<=`, `==`, `!=`.

- **Liczby** – porównywane wartościami numerycznymi: `3 > 1` → `True`
- **Łańcuchy znaków** – porównywane leksykograficznie (po kodach Unicode/ASCII): `"banan" > "ananas"` → `True` (bo 'b' > 'a')
- **Listy** – porównywane element po elemencie: `[1, 3] > [1, 2]` → `True`

W algorytmach sortowania Python automatycznie wie, jak porównywać elementy tego samego typu. Na przykład w sortowaniu bąbelkowym:
```python
if lista[j] > lista[j+1]:  # Python sam wie jak porównać
    lista[j], lista[j+1] = lista[j+1], lista[j]
```

---

## Pytanie 21
**Opisz, jak za pomocą języka C++ sprawdzić, czy adres e-mail zawiera znak „@" oraz kropkę.**

Do sprawdzenia obecności znaków w łańcuchu używamy metody `.find()`:

```cpp
#include <string>
using namespace std;

bool CzyPoprawnyAdres(string email) {
    int pozAt = email.find('@');
    
    // Sprawdź czy @ istnieje i nie jest na początku
    if (pozAt < 2 || pozAt == string::npos)
        return false;
    
    // Sprawdź czy jest tylko jeden @
    if (email.find('@', pozAt + 1) != string::npos)
        return false;
    
    // Sprawdź czy jest kropka po @
    int pozKropka = email.find('.', pozAt + 1);
    if (pozKropka == string::npos)
        return false;
    
    // Kropka nie może być tuż po @ ani na końcu
    if (pozKropka - pozAt < 2 || pozKropka == email.length() - 1)
        return false;
    
    return true;
}
```

**Etapy sprawdzania:**
1. Znalezienie znaku `@` – musi istnieć i nie być na początku
2. Upewnienie się, że jest tylko jeden `@`
3. Szukanie kropki po `@` – musi istnieć
4. Sprawdzenie odległości między `@` a kropką – minimum 2 znaki

---

## Pytanie 22
**Jak można zaimplementować deszyfrowanie szyfru Cezara bez znajomości klucza?**

Deszyfrowanie bez klucza realizuje się metodą **brute-force (siłową)** – sprawdzamy wszystkie 25 możliwych przesunięć:

```cpp
void lamanieeSzyfruCezara(string szyfrogram) {
    for (int klucz = 1; klucz <= 25; klucz++) {
        string proba = "";
        for (char znak : szyfrogram) {
            if (isupper(znak))
                proba += char((znak - 'A' - klucz + 26) % 26 + 'A');
            else if (islower(znak))
                proba += char((znak - 'a' - klucz + 26) % 26 + 'a');
            else
                proba += znak;
        }
        cout << "Klucz " << klucz << ": " << proba << endl;
    }
}
```

Program wyświetla 25 możliwych wersji odszyfrowanej wiadomości. Użytkownik wybiera tę, która tworzy sensowny tekst. Metoda jest szybka, bo istnieje tylko 25 możliwych przesunięć.

Inne metody łamania: **analiza częstotliwości liter** i **atak z wykorzystaniem znanego fragmentu tekstu**.

---

## Pytanie 23
**Wyjaśnij, na czym polega filtrowanie sąsiednich duplikatów i w jakich sytuacjach może być użyteczne.**

Filtrowanie sąsiednich duplikatów polega na **porównywaniu każdego elementu z poprzednim** i dodawaniu do wynikowej listy tylko tych, które się różnią:

1. Zapamiętaj pierwszy element
2. Dla każdego kolejnego: jeśli różny od poprzedniego – dodaj do wyniku, jeśli taki sam – pomiń
3. Z każdego ciągu powtórzeń pozostaje tylko pierwszy wyraz

**Przykład:** balon, balon, klocki, książka, książka → **balon, klocki, książka**

**Zastosowania:**
- Czyszczenie list zakupów z powtórzeń
- Usuwanie duplikatów w bazach danych
- Przetwarzanie danych z systemów automatycznych
- Programy antyplagiatowe i analityczne
- Czyszczenie danych w arkuszach Excel, Access, Power BI

---

## Pytanie 24
**Porównaj zalety i wady przechowywania danych tekstowych jako char[] i jako string w języku C++.**

| Cecha | `char[]` | `string` |
|---|---|---|
| **Typ** | Tablica znaków (typ prosty) | Klasa z biblioteki standardowej |
| **Pamięć** | Stała wielkość | Dynamiczna, automatycznie dopasowywana |
| **Zarządzanie** | Ręczne | Automatyczne |
| **Metody** | Brak (wymaga `strlen`, `strcpy`, `strcat`) | Wiele: `.find()`, `.length()`, `.substr()` |
| **Łączenie** | `strcat()` | `s1 + s2` |
| **Porównywanie** | `strcmp()` | `s1 == s2` |
| **Wydajność** | Szybszy | Nieco wolniejszy |
| **Bezpieczeństwo** | Ryzyko przepełnienia bufora | Bezpieczny |

---

## Pytanie 25
**Zaproponuj algorytm walidacji hasła w C++.**

```cpp
bool walidujHaslo(string haslo) {
    if (haslo.length() < 8) return false;
    
    bool maDuza = false, maCyfre = false, maSpecjalny = false;
    
    for (char znak : haslo) {
        if (isupper(znak)) maDuza = true;
        else if (isdigit(znak)) maCyfre = true;
        else if (!isalnum(znak)) maSpecjalny = true;
    }
    
    return maDuza && maCyfre && maSpecjalny;
}
```

**Algorytm krok po kroku:**
1. Sprawdź długość hasła – minimum **8 znaków**
2. Zainicjalizuj flagi: `maDuza`, `maCyfre`, `maSpecjalny`
3. Iteruj po znakach: `isupper()` → wielka litera, `isdigit()` → cyfra, `!isalnum()` → znak specjalny
4. Jeśli wszystkie flagi = true → hasło bezpieczne

**Warunki bezpiecznego hasła:** min. 8 znaków, co najmniej 1 wielka litera, 1 cyfra, 1 znak specjalny.

---

## Pytanie 26
**Czym jest szyfr Cezara?**

Szyfr Cezara to jeden z **najstarszych i najprostszych** sposobów szyfrowania tekstu, nazwany od Juliusza Cezara, który stosował go do zabezpieczania korespondencji wojskowej.

**Zasada:** Każda litera wiadomości przesuwana jest o ustaloną liczbę pozycji w alfabecie. Ta liczba to **klucz szyfrowania**. Alfabet jest **cykliczny** – po Z następuje znowu A.

**Przykład (klucz = 3):** TAJNE → WDMQH

**Zaleta:** Prostota i szybkość.
**Wada:** Tylko 25 możliwych przesunięć – łatwy do złamania metodą brute-force.

Szyfr jest **symetryczny** – do odszyfrowania wystarczy znać oryginalne przesunięcie i przesunąć litery w przeciwnym kierunku.

---

## Pytanie 27
**Podaj przykład zastosowania łańcucha znaków (string) w języku C++.**

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string imie, email1, email2;
    
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj email: ";
    cin >> email1;
    cout << "Powtorz email: ";
    cin >> email2;
    
    // Porównywanie stringów
    if (email1 == email2) {
        cout << "Witaj, " + imie + "! Rejestracja udana." << endl;
    } else {
        cout << "Adresy email sie roznia!" << endl;
    }
    
    // Sprawdzanie obecności znaku
    if (email1.find('@') != string::npos) {
        cout << "Email zawiera znak @" << endl;
    }
    
    // Długość stringa
    cout << "Dlugosc emaila: " << email1.length() << endl;
    
    return 0;
}
```

Operacje na `string`: porównywanie (`==`), łączenie (`+`), wyszukiwanie (`.find()`), długość (`.length()`).

---

## Pytanie 28
**Jakie warunki powinno spełniać bezpieczne hasło według podstawowych zasad?**

Hasło uznajemy za bezpieczne, jeśli spełnia **wszystkie** poniższe warunki:

1. Ma długość **co najmniej 8 znaków**
2. Zawiera co najmniej **jedną wielką literę** (A-Z)
3. Zawiera co najmniej **jedną cyfrę** (0-9)
4. Zawiera co najmniej **jeden znak specjalny** (np. !@#$%^&*())

W C++ do sprawdzania tych warunków używamy funkcji:
- `isupper(znak)` – wielka litera
- `isdigit(znak)` – cyfra
- `!isalnum(znak)` – znak specjalny (nie litera i nie cyfra)
- `haslo.length()` – długość hasła

---

## Pytanie 29
**Jak sprawdzić długość napisu w języku C++?**

Dla typu `string` używamy metody **`.length()`** lub **`.size()`**:

```cpp
string tekst = "Informatyka";
cout << tekst.length();  // 11
cout << tekst.size();    // 11
```

Dla tablicy `char[]` używamy funkcji **`strlen()`** z `<cstring>`:

```cpp
char tekst[] = "Informatyka";
cout << strlen(tekst);  // 11
```

Obie metody zwracają liczbę znaków w napisie.

---

## Pytanie 30
**Jaką funkcję pełni metoda .find() w języku C++?**

Metoda `.find()` służy do **wyszukiwania pozycji pierwszego wystąpienia** znaku lub podciągu w łańcuchu znaków:

```cpp
string email = "ania@szkola.edu";
int pos = email.find('@');     // 4
int pos2 = email.find("szkola"); // 5
```

Jeśli szukany element **nie został znaleziony**, metoda zwraca `string::npos`.

```cpp
if (email.find('@') != string::npos) {
    cout << "Znaleziono @";
}
```

**Zastosowania:** walidacja e-mail, wyszukiwanie wzorców w tekście, sprawdzanie obecności znaków specjalnych.
