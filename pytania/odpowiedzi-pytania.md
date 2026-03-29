# Odpowiedzi – Pytania egzaminacyjne Informatyka Klasa 3 LO (Poziom Rozszerzony)

---

## Pytanie 1
**W jaki sposób algorytmy sortujące mogą wpływać na wydajność programów?**

Algorytmy sortujące mają bezpośredni wpływ na wydajność programów, ponieważ uporządkowane dane pozwalają na znacznie szybsze wyszukiwanie i przetwarzanie informacji. Gdy dane są posortowane, można stosować **wyszukiwanie binarne** (O(log n)) zamiast sekwencyjnego (O(n)), co drastycznie skraca czas dostępu.

Wybór algorytmu sortowania ma kluczowe znaczenie:
- **Sortowanie bąbelkowe** – złożoność O(n²), wolne dla dużych zbiorów
- **Quick Sort** – średnio O(n log n), bardzo szybkie w praktyce
- **Sortowanie kubełkowe** – nawet O(n) przy równomiernym rozkładzie danych

Dzięki sortowaniu systemy komputerowe działają sprawniej — bazy danych stają się bardziej czytelne, wyniki wyszukiwania w Internecie są bardziej trafne, a w grach komputerowych sortowanie obiektów może przyspieszać renderowanie scen.

---

## Pytanie 2
**Jak można zaimplementować sortowanie przez wstawianie w języku C++?**

Sortowanie przez wstawianie (Insertion Sort) polega na tym, że każdy kolejny element jest wstawiany na właściwe miejsce w już posortowanej części tablicy. Algorytm działa w następujących krokach:

1. Bierzemy kolejny element z nieposortowanej części
2. Porównujemy go z elementami w posortowanej części
3. Przesuwamy większe elementy o jedno miejsce w prawo
4. Wstawiamy element na właściwe miejsce

```cpp
void sortowaniePrzezWstawianie(int tab[], int n) {
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
1. Porównujemy 5 z 9 → przesuwamy 9, wstawiamy 5 → {5, 9, 1, 4, 3}
2. Wstawiamy 1 → przesuwamy 9, 5 → {1, 5, 9, 4, 3}
3. Wstawiamy 4 → przesuwamy 9, 5 → {1, 4, 5, 9, 3}
4. Wstawiamy 3 → przesuwamy 9, 5, 4 → {1, 3, 4, 5, 9}

Złożoność: O(n²) w najgorszym przypadku, O(n) dla prawie posortowanych danych.

---

## Pytanie 3
**Jakie są pierwsze cztery liczby ciągu Fibonacciego?**

Pierwsze cztery liczby ciągu Fibonacciego to: **0, 1, 1, 2**.

Ciąg Fibonacciego został opisany przez włoskiego matematyka Leonarda z Pizy (Fibonacci). Każdy kolejny wyraz to suma dwóch poprzednich:
- F(0) = 0
- F(1) = 1
- F(2) = 0 + 1 = 1
- F(3) = 1 + 1 = 2
- F(4) = 1 + 2 = 3
- F(5) = 2 + 3 = 5, itd.

---

## Pytanie 4
**Gdzie w przyrodzie można spotkać ciąg Fibonacciego?**

Ciąg Fibonacciego zadziwia swoją obecnością w przyrodzie:

- **Układ płatków kwiatów** – wiele kwiatów ma liczbę płatków odpowiadającą liczbom Fibonacciego (np. 3, 5, 8, 13)
- **Muszle ślimaków** – spirale muszli wpisują się w złotą spiralę opartą na ciągu Fibonacciego
- **Rozgałęzienia drzew** – schemat rozgałęzień odpowiada kolejnym wyrazom ciągu
- **Układ liści na łodydze** – tzw. filotaksja, liście rozmieszczone są w proporcjach Fibonacciego
- **Kształty huraganów** – ich spiralne formy odpowiadają złotej spirali

Złota proporcja (φ ≈ 1,618) wynikająca z ciągu pojawia się również w architekturze (np. Partenon, Tadż Mahal) oraz w grafice komputerowej i projektowaniu logotypów.

---

## Pytanie 5
**Jakie operacje są podstawą sortowania przez wstawianie?**

Podstawowe operacje w sortowaniu przez wstawianie to:

1. **Porównywanie** – analizowany element jest porównywany z elementami w posortowanej części tablicy
2. **Przesuwanie** – elementy większe od wstawianego są przesuwane o jedną pozycję w prawo, aby zrobić miejsce
3. **Wstawianie** – element jest umieszczany na właściwej pozycji w posortowanej części

Algorytm iteruje po elementach tablicy od drugiego do ostatniego. Dla każdego elementu przeszukuje posortowaną część od prawej do lewej, przesuwając większe elementy, aż znajdzie właściwe miejsce do wstawienia.

---

## Pytanie 6
**Jakie są zalety dynamicznego typowania Pythona przy pisaniu algorytmów, a jakie mogą być wady?**

**Zalety dynamicznego typowania:**
- **Szybsze prototypowanie** – nie trzeba deklarować typów zmiennych, co przyspiesza pisanie kodu
- **Elastyczność** – ta sama zmienna może przechowywać różne typy danych w trakcie działania programu
- **Mniej kodu** – brak konieczności pisania deklaracji typów sprawia, że algorytmy są krótsze i bardziej czytelne
- **Łatwiejsze uczenie się** – początkujący programiści mogą skupić się na logice algorytmu

**Wady dynamicznego typowania:**
- **Możliwość błędów w czasie działania** – błędy typów ujawniają się dopiero podczas wykonywania programu, a nie kompilacji
- **Trudniejsze debugowanie** – trudniej znaleźć przyczynę błędu, gdy zmienna ma nieoczekiwany typ
- **Mniejsza wydajność** – interpreter musi sprawdzać typy w czasie wykonania
- **Brak jasności kodu** – przy dużych projektach trudno określić, jaki typ powinna mieć dana zmienna

---

## Pytanie 7
**Jakie cechy składni i semantyki języka Python wpływają na to, że algorytmy w tym języku można napisać znacznie krócej niż np. w C++?**

Python pozwala pisać krótsze algorytmy dzięki:

1. **Wyrażenia listowe (list comprehensions)** – pozwalają tworzyć listy w jednej linii:
   ```python
   kwadraty = [x**2 for x in range(10)]
   ```
2. **Wielokrotne przypisania** – zamiana wartości bez zmiennej tymczasowej:
   ```python
   a, b = b, a + b
   ```
3. **Brak deklaracji typów** – nie trzeba pisać `int`, `float`, `string`
4. **Brak klamer `{}`** – wcięcia zamiast klamer jako bloki kodu
5. **Wbudowane funkcje** – `sort()`, `len()`, `range()`, `min()`, `max()` dostępne bez importu
6. **Dynamiczne typowanie** – zmienne automatycznie przyjmują odpowiedni typ
7. **Funkcje anonimowe (lambda)** – krótkie funkcje w jednej linii

---

## Pytanie 8
**Na czym polega sortowanie przez porównywanie sąsiednich elementów i jak można je zaimplementować w Pythonie?**

Sortowanie przez porównywanie sąsiednich elementów to **sortowanie bąbelkowe (Bubble Sort)**. Polega na wielokrotnym przechodzeniu przez tablicę i porównywaniu par sąsiednich elementów. Jeśli element po lewej jest większy od elementu po prawej, zamieniane są miejscami. Największe elementy „wypływają" na koniec tablicy jak bąbelki.

```python
def sortowanie_babelkowe(lista):
    n = len(lista)
    for i in range(n):
        for j in range(0, n - i - 1):
            if lista[j] > lista[j + 1]:
                lista[j], lista[j + 1] = lista[j + 1], lista[j]
    return lista
```

**Kroki działania:**
1. Przechodzimy przez tablicę od początku do końca
2. Porównujemy każdą parę sąsiednich elementów
3. Jeśli element po lewej jest większy – zamieniamy je miejscami
4. Po jednej przebieżce największy element trafia na koniec
5. Powtarzamy aż do braku zamian

Złożoność: O(n²). Prosty do zrozumienia, ale wolny dla dużych zbiorów danych.

---

## Pytanie 9
**Co to jest lista w języku Python?**

Lista w Pythonie to **dynamiczna, uporządkowana struktura danych**, która może przechowywać wiele elementów różnych typów. Listy są jednym z najczęściej używanych typów danych w Pythonie.

```python
# Tworzenie listy
liczby = [3, 1, 4, 1, 5]
mieszana = [1, "tekst", 3.14, True]

# Operacje na listach
liczby.append(9)        # dodanie elementu
liczby.sort()           # sortowanie
print(len(liczby))      # długość listy
print(liczby[0])        # dostęp po indeksie
```

Listy obsługują indeksowanie (od 0), wycinki (slicing), iterowanie w pętlach, a także wiele wbudowanych metod jak `append()`, `sort()`, `remove()`, `pop()`.

---

## Pytanie 10
**Jak nazywa się polecenie w Pythonie, które powtarza czynności wiele razy?**

Polecenie, które powtarza czynności wiele razy w Pythonie, to **pętla**. Python oferuje dwa rodzaje pętli:

1. **Pętla `for`** – iteruje po elementach sekwencji (listy, zakresu, tekstu):
   ```python
   for i in range(5):
       print(i)
   ```

2. **Pętla `while`** – powtarza czynności dopóki warunek jest spełniony:
   ```python
   i = 0
   while i < 5:
       print(i)
       i += 1
   ```

Pętla `for` z funkcją `range()` jest najczęściej stosowana w algorytmach sortowania.

---

## Pytanie 11
**Wyjaśnij, na czym polega filtrowanie sąsiednich duplikatów i w jakich sytuacjach może być użyteczne.**

Filtrowanie sąsiednich duplikatów polega na **porównywaniu każdego elementu z poprzednim** i zapisywaniu do listy wynikowej tylko tych elementów, które różnią się od bezpośredniego poprzednika. Z każdego ciągu powtórzeń pozostaje tylko pierwszy wyraz.

**Algorytm krok po kroku:**
1. Wczytaj pierwszy wyraz i zapamiętaj go jako początek listy wynikowej
2. Dla każdego kolejnego słowa: jeśli jest inne niż poprzednie – dodaj je do listy, jeśli takie samo – pomiń
3. Powtarzaj aż do końca danych

**Przykład:** Lista: balon, balon, klocki, książka, książka → Wynik: balon, klocki, książka

**Zastosowania:**
- Czyszczenie list zakupów z powtórzeń
- Usuwanie duplikatów w bazach danych i arkuszach kalkulacyjnych
- Przetwarzanie danych z automatycznych systemów
- Programy antyplagiatowe i analityczne

---

## Pytanie 12
**Porównaj zalety i wady przechowywania danych tekstowych jako char[] i jako string w języku C++.**

| Cecha | `char[]` | `string` |
|---|---|---|
| **Typ** | Tablica znaków (typ prosty) | Klasa z biblioteki standardowej |
| **Pamięć** | Stała wielkość, ustalana przy deklaracji | Dynamiczna, automatycznie dopasowywana |
| **Zarządzanie** | Ręczne zarządzanie pamięcią | Automatyczne zarządzanie |
| **Metody** | Brak wbudowanych metod | Wiele metod: `.find()`, `.length()`, `.substr()` |
| **Łączenie** | Wymaga `strcat()` | Proste: `s1 + s2` |
| **Porównywanie** | Wymaga `strcmp()` | Proste: `s1 == s2` |
| **Wydajność** | Szybszy (mniejszy narzut) | Nieco wolniejszy (narzut klasy) |
| **Wygoda** | Mało wygodny, łatwo popełnić błąd | Bardzo wygodny i bezpieczny |

**Podsumowanie:** `string` jest wygodniejszy i bezpieczniejszy, zalecany w większości zastosowań. `char[]` może być szybszy w krytycznych sekcjach kodu.

---

## Pytanie 13
**Czym jest szyfr Cezara?**

Szyfr Cezara to jeden z najstarszych i najprostszych sposobów szyfrowania tekstu. Nazwa pochodzi od Juliusza Cezara, który stosował tę metodę do zabezpieczania korespondencji wojskowej.

**Zasada działania:** Każda litera wiadomości zostaje przesunięta o ustaloną liczbę pozycji w alfabecie. Liczba ta to **klucz szyfrowania**.

**Przykład (klucz = 3):**
- A → D, B → E, C → F, ..., Z → C
- Tekst jawny: `TAJNE`
- Zaszyfrowany: `WDMQH`

Alfabet traktowany jest jako **cykliczny** – po Z następuje znowu A. Szyfr jest **symetryczny** – do odszyfrowania wystarczy przesunąć litery w przeciwnym kierunku o tę samą liczbę pozycji.

**Wada:** Istnieje tylko 25 możliwych przesunięć, więc złamanie metodą siłową (brute force) jest bardzo łatwe.

---

## Pytanie 14
**Jak sprawdzić długość napisu w języku C++?**

W C++ długość napisu sprawdzamy za pomocą metody **`.length()`** lub **`.size()`** klasy `string`:

```cpp
#include <string>
using namespace std;

string tekst = "Informatyka";
int dlugosc = tekst.length();  // wynik: 11
// lub
int dlugosc2 = tekst.size();   // wynik: 11
```

Dla tablicy znaków `char[]` używamy funkcji `strlen()` z biblioteki `<cstring>`:

```cpp
#include <cstring>

char tekst[] = "Informatyka";
int dlugosc = strlen(tekst);  // wynik: 11
```

---

## Pytanie 15
**Jaką funkcję pełni metoda .find() w języku C++?**

Metoda `.find()` w języku C++ służy do **wyszukiwania pozycji (indeksu) pierwszego wystąpienia** podanego znaku lub podciągu w łańcuchu znaków.

```cpp
string tekst = "ania.kowalska@szkola.edu";

int pozycja = tekst.find('@');     // wynik: 13
int pozycja2 = tekst.find("szkola"); // wynik: 14
```

Jeśli szukany znak lub podciąg **nie zostanie znaleziony**, metoda zwraca wartość `string::npos` (najczęściej -1 lub bardzo duża liczba).

**Zastosowania:**
- Sprawdzanie obecności znaku `@` w adresie e-mail
- Wyszukiwanie kropki po znaku `@`
- Lokalizowanie wzorca w tekście

---

## Pytanie 16
**W jaki sposób szyfrowanie znaków można wykorzystać do prostego ukrywania danych w Pythonie?**

Szyfrowanie znaków w Pythonie można zrealizować za pomocą przesunięcia kodów ASCII z użyciem funkcji `ord()` i `chr()`:

```python
def szyfruj_cezar(tekst, klucz):
    wynik = ""
    for znak in tekst:
        if znak.isupper():
            wynik += chr((ord(znak) - ord('A') + klucz) % 26 + ord('A'))
        elif znak.islower():
            wynik += chr((ord(znak) - ord('a') + klucz) % 26 + ord('a'))
        else:
            wynik += znak
    return wynik

print(szyfruj_cezar("TAJNE", 3))  # "WDMQH"
```

- **`ord(znak)`** – zwraca kod ASCII znaku
- **`chr(kod)`** – zwraca znak o danym kodzie ASCII
- **`% 26`** – zapewnia cykliczność alfabetu (po Z wraca do A)

To prosty sposób na ukrycie danych tekstowych, który choć nie zapewnia silnego bezpieczeństwa, pozwala zrozumieć podstawy kryptografii.

---

## Pytanie 17
**Jak działa mechanizm przesunięcia w szyfrze Cezara w kontekście kodów ASCII? Co się stanie, jeśli wprowadzimy przesunięcie większe niż 26 lub ujemne?**

Mechanizm przesunięcia w szyfrze Cezara opiera się na operacjach na kodach ASCII:

1. Konwertujemy literę na wartość 0-25: `znak - 'A'`
2. Dodajemy klucz (przesunięcie): `(wartość + klucz)`
3. Stosujemy operację modulo 26: `% 26` — zapewnia cykliczność alfabetu
4. Konwertujemy z powrotem na literę: `+ 'A'`

**Wzór:** `nowy_znak = (znak - 'A' + klucz) % 26 + 'A'`

**Przesunięcie większe niż 26:** Operacja `% 26` automatycznie "zawija" alfabet. Przesunięcie o 29 daje ten sam wynik co przesunięcie o 3 (bo 29 % 26 = 3). Zatem przesunięcie o 26 nic nie zmienia.

**Przesunięcie ujemne:** Przesuwa litery w lewo zamiast w prawo. Przesunięcie o -3 jest równoważne deszyfracji z kluczem 3. W implementacji dodajemy 26 przed modulo, aby uniknąć wartości ujemnych: `(znak - 'A' - klucz + 26) % 26 + 'A'`.

---

## Pytanie 18
**Co zwróci funkcja len() w języku Python dla łańcucha znaków i jak można to wykorzystać?**

Funkcja `len()` zwraca **liczbę znaków** w łańcuchu znaków (łącznie ze spacjami i znakami specjalnymi):

```python
tekst = "Informatyka"
print(len(tekst))  # 11

haslo = "Abc123!@"
print(len(haslo))  # 8
```

**Zastosowania:**
- **Walidacja hasła** – sprawdzanie minimalnej długości: `if len(haslo) >= 8:`
- **Iterowanie po tekście** – `for i in range(len(tekst)):`
- **Sprawdzanie pustego tekstu** – `if len(tekst) == 0:`
- **Ograniczanie długości danych wejściowych**

---

## Pytanie 19
**Czym jest i jak działa funkcja replace() w Pythonie?**

Funkcja `replace()` służy do **zastępowania fragmentów tekstu** innym ciągiem znaków. Zwraca nowy łańcuch z dokonanymi zmianami (oryginał nie jest modyfikowany).

```python
tekst = "Witaj, świecie!"

# Zamiana jednego tekstu na inny
nowy = tekst.replace("świecie", "Pythonie")
print(nowy)  # "Witaj, Pythonie!"

# Usuwanie znaków (zamiana na pusty string)
bez_spacji = tekst.replace(" ", "")
print(bez_spacji)  # "Witaj,świecie!"

# Ograniczenie liczby zamian
tekst2 = "aaa bbb aaa"
print(tekst2.replace("aaa", "ccc", 1))  # "ccc bbb aaa"
```

**Składnia:** `string.replace(stary, nowy, liczba_zamian)`

---

## Pytanie 20
**Wyjaśnij, co sprawdza warunek if znak.isupper()?**

Warunek `if znak.isupper()` sprawdza, czy dany znak jest **wielką literą** (A-Z).

```python
znak = 'A'
if znak.isupper():
    print("To wielka litera")  # To się wyświetli

znak2 = 'a'
if znak2.isupper():
    print("To wielka litera")  # To się NIE wyświetli
```

Metoda `isupper()` zwraca `True` gdy znak jest wielką literą, `False` w przeciwnym razie. Jest to jedna z metod sprawdzających typ znaku w Pythonie:
- `.isupper()` – czy wielka litera
- `.islower()` – czy mała litera
- `.isdigit()` – czy cyfra
- `.isalpha()` – czy litera (dowolna)
- `.isalnum()` – czy litera lub cyfra

**Zastosowanie w walidacji hasła:**
```python
for znak in haslo:
    if znak.isupper():
        ma_duza = True
```

---

## Pytanie 21
**Czym różni się projektowanie użytkowe (np. brelok) od projektowania ozdobnego w grafice 3D?**

| Cecha | Projektowanie użytkowe | Projektowanie ozdobne |
|---|---|---|
| **Cel** | Tworzenie funkcjonalnych przedmiotów | Tworzenie dekoracyjnych elementów |
| **Wymiary** | Precyzyjne, zgodne z rzeczywistością | Dowolne, artystyczne |
| **Materiał** | Musi wytrzymać użytkowanie (trwały filament) | Może być delikatny |
| **Przykłady** | Brelok, uchwyt, obudowa, przekładka | Figurka, rzeźba, ozdoba |
| **Wymagania** | Otwory na zawieszki, grubość ≥ 1.5mm | Estetyka, detale, kolor |
| **Skala** | Musi odpowiadać rzeczywistości | Dowolna |

W projektowaniu użytkowym (np. breloka) kluczowe jest uwzględnienie **wymiarów rzeczywistych**, **wytrzymałości**, **tolerancji druku** oraz **funkcjonalności** (np. otwór na kółko). W projektowaniu ozdobnym priorytetem jest **estetyka** i **wrażenie wizualne**.

---

## Pytanie 22
**Porównaj zalety i wady tworzenia modelu w Tinkercadzie w stosunku do programów profesjonalnych (np. Fusion 360, Blender).**

| Cecha | Tinkercad | Fusion 360 / Blender |
|---|---|---|
| **Łatwość** | Bardzo prosty, intuicyjny | Wymagają długiej nauki |
| **Koszt** | Darmowy | Darmowe (edukacja) / płatne |
| **Instalacja** | Brak – działa w przeglądarce | Wymagają instalacji |
| **Możliwości** | Podstawowe bryły, grupowanie | Zaawansowane modelowanie, animacja |
| **Precyzja** | Ograniczona | Bardzo wysoka |
| **Dla kogo** | Początkujący, uczniowie | Profesjonaliści, inżynierowie |
| **Eksport** | STL, OBJ | Wiele formatów |
| **Praca w chmurze** | Tak – automatyczny zapis | Lokalnie (Blender) / chmura (Fusion) |

**Zalety Tinkercada:** prostota, brak instalacji, idealny do nauki, szybkie prototypowanie.
**Wady Tinkercada:** ograniczone możliwości, brak zaawansowanych narzędzi rzeźbienia i animacji.

---

## Pytanie 23
**Na czym polega praca z obiektami w przestrzeni trójwymiarowej?**

Praca z obiektami 3D odbywa się w tzw. **scenie** – wirtualnej przestrzeni roboczej. Obejmuje ona następujące operacje:

1. **Przesuwanie (translacja)** – zmiana położenia obiektu wzdłuż osi X, Y, Z
2. **Skalowanie** – zmiana rozmiaru obiektu w jednym lub kilku wymiarach
3. **Obracanie (rotacja)** – obrót wokół wybranej osi
4. **Grupowanie** – łączenie kilku obiektów w jeden
5. **Wycinanie otworów** – tworzenie pustych przestrzeni wewnątrz brył

Każdy obiekt 3D posiada trzy wymiary: **szerokość, wysokość i głębokość**. Obiekty są reprezentowane za pomocą siatki wielokątów (trójkątów/czworokątów). Można im przypisać **materiał**, **kolor**, **przezroczystość** i inne atrybuty.

---

## Pytanie 24
**Czym różni się grafika 2D od 3D?**

| Cecha | Grafika 2D | Grafika 3D |
|---|---|---|
| **Wymiary** | Szerokość i wysokość (X, Y) | Szerokość, wysokość i głębokość (X, Y, Z) |
| **Obraz** | Płaski (rysunek, zdjęcie, schemat) | Przestrzenny, z głębią |
| **Obracanie** | Brak możliwości | Obiekt można oglądać pod różnym kątem |
| **Narzędzia** | GIMP, Inkscape, Photoshop | Tinkercad, Blender, Fusion 360 |
| **Zastosowania** | Grafika rastrowa/wektorowa, schematy | Gry, animacje, druk 3D, architektura |

Grafika 3D dodaje **trzeci wymiar – głębokość**, co pozwala na realistyczne przedstawienie obiektów, obracanie ich i ustawianie w przestrzeni.

---

## Pytanie 25
**Wymień przynajmniej dwa różne filamenty do drukarek 3D.**

1. **PLA (kwas polimlekowy)** – biodegradowalny, łatwy w użyciu, idealny do nauki i modeli dekoracyjnych. Jest sztywny, ale kruchy.
2. **ABS** – wytrzymalszy i odporny na wysokie temperatury, często wykorzystywany w produkcji części technicznych.
3. **TPU** – elastyczny filament, przypominający gumę. Używany do drukowania uszczelek, podeszew i zawiasów.

Najpopularniejsza technologia druku w szkolnych drukarkach to **FDM/FFF** (Fused Deposition Modelling), polegająca na nakładaniu cienkich warstw rozgrzanego filamentu, które po ostygnięciu tworzą finalny kształt.

---

## Pytanie 26
**Wyjaśnij co to są i do czego służą funkcje agregujące (agregatu SQL).**

Funkcje agregujące w SQL to funkcje, które **wykonują obliczenia na zestawie wartości i zwracają pojedynczy wynik**. Służą do podsumowywania i analizowania danych.

Najczęściej używane funkcje agregujące:

| Funkcja | Opis | Przykład |
|---|---|---|
| `COUNT()` | Liczy liczbę rekordów | `SELECT COUNT(*) FROM uczniowie;` |
| `SUM()` | Sumuje wartości | `SELECT SUM(wartosc) FROM oceny;` |
| `AVG()` | Oblicza średnią | `SELECT AVG(wartosc) FROM oceny;` |
| `MIN()` | Znajduje minimum | `SELECT MIN(wartosc) FROM oceny;` |
| `MAX()` | Znajduje maksimum | `SELECT MAX(wartosc) FROM oceny;` |

Funkcje agregujące często stosuje się z klauzulą `GROUP BY`:
```sql
SELECT kod_przedmiotu, AVG(wartosc) AS srednia
FROM oceny
GROUP BY kod_przedmiotu;
```

---

## Pytanie 27
**Opisz różnice między INNER JOIN, LEFT JOIN i RIGHT JOIN, podając praktyczne przykłady ich zastosowania.**

**INNER JOIN** – zwraca tylko te rekordy, dla których istnieje dopasowanie w **obu tabelach**:
```sql
SELECT u.imie, o.wartosc
FROM uczniowie u
INNER JOIN oceny o ON u.id_ucznia = o.id_ucznia;
-- Wyświetli tylko uczniów, którzy MAJĄ oceny
```

**LEFT JOIN** – zwraca **wszystkie rekordy z lewej tabeli** oraz dopasowane z prawej. Jeśli brak dopasowania – pojawi się NULL:
```sql
SELECT u.imie, o.wartosc
FROM uczniowie u
LEFT JOIN oceny o ON u.id_ucznia = o.id_ucznia;
-- Wyświetli WSZYSTKICH uczniów, nawet tych BEZ ocen
```

**RIGHT JOIN** – zwraca **wszystkie rekordy z prawej tabeli** oraz dopasowane z lewej:
```sql
SELECT u.imie, o.wartosc
FROM uczniowie u
RIGHT JOIN oceny o ON u.id_ucznia = o.id_ucznia;
-- Wyświetli WSZYSTKIE oceny, nawet jeśli brak przypisanego ucznia
```

---

## Pytanie 28
**Omów składnię polecenia INSERT w MySQL.**

Polecenie `INSERT INTO` służy do **dodawania nowych rekordów** do tabeli w bazie danych.

**Składnia:**
```sql
INSERT INTO nazwa_tabeli (kolumna1, kolumna2, kolumna3)
VALUES (wartosc1, wartosc2, wartosc3);
```

**Elementy polecenia:**
1. `INSERT INTO` – wskazuje tabelę, do której trafiają dane
2. Lista kolumn w nawiasie – nazwy kolumn do uzupełnienia
3. `VALUES` – wartości w tej samej kolejności co kolumny

**Przykład:**
```sql
INSERT INTO uczniowie (imie, nazwisko, data_urodzenia, klasa)
VALUES ('Anna', 'Kowalska', '2007-05-12', '3A');
```

**Ważne zasady:**
- Kolumny z `AUTO_INCREMENT` pomijamy (wartość nadawana automatycznie)
- Dane tekstowe wpisujemy w **apostrofach** (`'Anna'`)
- Można wstawić wiele rekordów jednocześnie (oddzielonych przecinkami)
- Każde zapytanie kończymy **średnikiem** (`;`)

---

## Pytanie 29
**Omów składnię polecenia SELECT w MySQL.**

Polecenie `SELECT` służy do **pobierania i wyświetlania danych** z tabel w bazie danych.

**Podstawowa składnia:**
```sql
SELECT kolumna1, kolumna2 FROM nazwa_tabeli;
```

**Wyświetlenie wszystkich kolumn:**
```sql
SELECT * FROM uczniowie;
```

**Filtrowanie danych (WHERE):**
```sql
SELECT imie, nazwisko FROM uczniowie WHERE klasa = '2A';
```

**Sortowanie (ORDER BY):**
```sql
SELECT * FROM uczniowie ORDER BY nazwisko ASC;   -- rosnąco
SELECT * FROM uczniowie ORDER BY nazwisko DESC;  -- malejąco
```

**Funkcje agregujące z GROUP BY:**
```sql
SELECT kod_przedmiotu, COUNT(*) AS liczba_ocen
FROM oceny
GROUP BY kod_przedmiotu;
```

**Łączenie tabel (JOIN):**
```sql
SELECT u.imie, o.wartosc
FROM uczniowie u
INNER JOIN oceny o ON u.id_ucznia = o.id_ucznia;
```

`SELECT` jest najczęściej wykorzystywanym poleceniem SQL.

---

## Pytanie 30
**Jaką rolę pełni język SQL w pracy z bazami danych?**

SQL (Structured Query Language) to **podstawowe narzędzie do pracy z relacyjnymi bazami danych**. Umożliwia:

1. **Tworzenie struktur danych (DDL):**
   - `CREATE TABLE` – tworzenie nowej tabeli
   - `ALTER TABLE` – modyfikacja struktury tabeli
   - `DROP TABLE` – usuwanie tabeli

2. **Zarządzanie zawartością (DML):**
   - `INSERT INTO` – wstawianie nowych rekordów
   - `UPDATE` – aktualizacja istniejących danych
   - `DELETE` – usuwanie danych

3. **Pobieranie danych (DQL):**
   - `SELECT` – wyszukiwanie, filtrowanie, sortowanie i łączenie danych

4. **Kontrola dostępu (DCL):**
   - `GRANT` – przyznawanie uprawnień
   - `REVOKE` – odbieranie uprawnień

SQL jest obecny wszędzie tam, gdzie korzystamy z aplikacji obsługujących dane: sklepy internetowe, biblioteki, aplikacje pogodowe, dzienniki elektroniczne. Choć składnia może się nieznacznie różnić między systemami (MySQL, PostgreSQL, SQLite), podstawowe zasady SQL są **uniwersalne**.
