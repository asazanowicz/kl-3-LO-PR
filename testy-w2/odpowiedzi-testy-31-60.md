# Odpowiedzi – Test W2 Informatyka Klasa 3 LO (Pytania 31–60)

---

## Pytanie 31
**Napisz funkcję w Pythonie, która sprawdza, czy hasło ma co najmniej 10 znaków i zawiera cyfry.**

```python
def sprawdz_haslo(haslo):
    if len(haslo) < 10:
        return False
    
    ma_cyfre = False
    for znak in haslo:
        if znak.isdigit():
            ma_cyfre = True
            break
    
    return ma_cyfre

# Test
print(sprawdz_haslo("MojeHaslo123"))   # True
print(sprawdz_haslo("krotkie1"))        # False (za krótkie)
print(sprawdz_haslo("DlugieHasloBezCyfr"))  # False (brak cyfr)
```

Funkcja sprawdza dwa warunki: `len(haslo) >= 10` (minimalna długość) i obecność co najmniej jednej cyfry (metoda `.isdigit()`).

---

## Pytanie 32
**W jaki sposób szyfrowanie znaków można wykorzystać do prostego ukrywania danych w Pythonie?**

Szyfrowanie znaków w Pythonie realizujemy za pomocą **przesunięcia kodów ASCII** przy użyciu funkcji `ord()` i `chr()`:

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

# Szyfrowanie
zaszyfrowany = szyfruj_cezar("TAJNE DANE", 3)
print(zaszyfrowany)  # "WDMQH GDQH"

# Deszyfrowanie (klucz ujemny)
odszyfrowany = szyfruj_cezar(zaszyfrowany, -3)
print(odszyfrowany)  # "TAJNE DANE"
```

- `ord(znak)` – zwraca kod ASCII znaku
- `chr(kod)` – zwraca znak o danym kodzie
- `% 26` – zapewnia cykliczność alfabetu

To prosty sposób na ukrycie danych, choć nie zapewnia silnego bezpieczeństwa.

---

## Pytanie 33
**Opisz metodę walidacji hasła, w której stosuje się jednocześnie pętle i metody typu .isdigit() oraz .isupper().**

Metoda polega na **iterowaniu po znakach hasła** pętlą `for` i sprawdzaniu każdego znaku metodami wbudowanymi:

```python
def waliduj_haslo(haslo):
    if len(haslo) < 8:
        print("Hasło za krótkie!")
        return False
    
    ma_duza = False
    ma_cyfre = False
    ma_specjalny = False
    
    for znak in haslo:
        if znak.isupper():
            ma_duza = True
        elif znak.isdigit():
            ma_cyfre = True
        elif not znak.isalnum():
            ma_specjalny = True
    
    if not ma_duza:
        print("Brak wielkiej litery!")
    if not ma_cyfre:
        print("Brak cyfry!")
    if not ma_specjalny:
        print("Brak znaku specjalnego!")
    
    return ma_duza and ma_cyfre and ma_specjalny
```

**Algorytm:**
1. Sprawdź długość (`len()`)
2. Ustaw flagi: `ma_duza`, `ma_cyfre`, `ma_specjalny` na `False`
3. Pętlą `for` przejdź po każdym znaku
4. `.isupper()` → wielka litera, `.isdigit()` → cyfra, `not .isalnum()` → znak specjalny
5. Zwróć `True` jeśli wszystkie flagi spełnione

---

## Pytanie 34
**Jak działa mechanizm przesunięcia w szyfrze Cezara w kontekście kodów ASCII? Co się stanie, jeśli wprowadzimy przesunięcie większe niż 26 lub ujemne?**

Mechanizm przesunięcia opiera się na kodach ASCII:

1. `ord(znak) - ord('A')` → konwersja litery na wartość 0-25
2. `+ klucz` → dodanie przesunięcia
3. `% 26` → cykliczność alfabetu (po Z wraca do A)
4. `+ ord('A')` → konwersja z powrotem na kod ASCII

**Wzór:** `chr((ord(znak) - ord('A') + klucz) % 26 + ord('A'))`

**Przesunięcie > 26:** Operacja modulo automatycznie „zawija" alfabet. Przesunięcie o 29 = przesunięcie o 3 (bo 29 % 26 = 3). Przesunięcie o 26 nic nie zmienia.

**Przesunięcie ujemne:** Przesuwa litery w lewo. Przesunięcie o -3 to deszyfracja z kluczem 3. W implementacji dodajemy 26 przed modulo: `(ord(znak) - ord('A') - klucz + 26) % 26 + ord('A')`, aby uniknąć wartości ujemnych.

---

## Pytanie 35
**Jak sprawdzić, które litery mają kody mniejsze niż 100? Dlaczego może to być przydatne?**

```python
for kod in range(65, 123):  # zakres liter A-z
    if kod < 100:
        print(f"Znak: {chr(kod)}, Kod ASCII: {kod}")
```

**Wynik:** Litery o kodach < 100 to wielkie litery A-Z (65-90) oraz małe litery a-c (97-99).

**Dlaczego to przydatne:**
- Pozwala zrozumieć **organizację tabeli ASCII** – wielkie litery (65-90) mają kody niższe niż małe (97-122)
- Różnica między wielką a małą literą wynosi zawsze **32**
- Przydatne przy **konwersji wielkości liter** (np. `chr(ord('a') - 32)` → `'A'`)
- Ułatwia **walidację danych** – rozróżnianie liter, cyfr i znaków specjalnych na podstawie ich kodów
- Pomocne przy **implementacji szyfrów** opartych na przesunięciach ASCII

---

## Pytanie 36
**Co zwróci funkcja len() dla łańcucha znaków i jak można to wykorzystać?**

Funkcja `len()` zwraca **liczbę znaków** w łańcuchu (łącznie ze spacjami i znakami specjalnymi):

```python
print(len("Informatyka"))     # 11
print(len("Witaj, świecie!")) # 15
print(len(""))                 # 0
```

**Zastosowania:**
- **Walidacja hasła:** `if len(haslo) >= 8:`
- **Iterowanie:** `for i in range(len(tekst)):`
- **Sprawdzanie pustego tekstu:** `if len(tekst) == 0:`
- **Ograniczanie danych wejściowych**

---

## Pytanie 37
**Czym jest i jak działa funkcja replace() w Pythonie?**

Funkcja `replace()` **zastępuje fragmenty tekstu** innym ciągiem znaków. Zwraca nowy łańcuch (oryginał się nie zmienia):

```python
tekst = "Witaj, świecie!"
nowy = tekst.replace("świecie", "Pythonie")
print(nowy)  # "Witaj, Pythonie!"

# Usunięcie znaków
bez_spacji = tekst.replace(" ", "")
print(bez_spacji)  # "Witaj,świecie!"

# Ograniczenie liczby zamian
t = "aaa bbb aaa"
print(t.replace("aaa", "ccc", 1))  # "ccc bbb aaa"
```

**Składnia:** `string.replace(stary, nowy, max_zamian)`

---

## Pytanie 38
**Jak utworzyć zmienną typu str w języku Python i przypisać jej wartość?**

W Pythonie zmienną typu `str` tworzymy przez **przypisanie tekstu** w cudzysłowach lub apostrofach:

```python
# Apostrofy
imie = 'Anna'

# Cudzysłowy
nazwisko = "Kowalska"

# Wieloliniowy tekst
opis = """To jest
wieloliniowy tekst"""

# Konwersja z innego typu
liczba = str(42)    # "42"
wartosc = str(3.14) # "3.14"
```

Python automatycznie rozpoznaje typ (dynamiczne typowanie) – nie trzeba deklarować `str` explicite.

---

## Pytanie 39
**Czym jest i jak działa funkcja find() w Pythonie?**

Funkcja `find()` służy do **wyszukiwania pozycji pierwszego wystąpienia** podciągu w łańcuchu znaków:

```python
email = "ania@szkola.edu"

pos = email.find('@')      # 4
pos2 = email.find('szkola') # 5
pos3 = email.find('xyz')    # -1 (nie znaleziono)
```

**Zwraca:**
- **Indeks** (pozycję od 0) pierwszego wystąpienia
- **-1** gdy podciąg nie został znaleziony

**Zastosowania:**
```python
# Sprawdzenie obecności znaku
if email.find('@') != -1:
    print("Email zawiera @")

# Szukanie od określonej pozycji
pos_at = email.find('@')
pos_kropka = email.find('.', pos_at)  # szukaj kropki po @
```

---

## Pytanie 40
**Wyjaśnij, co sprawdza warunek if znak.isupper()?**

Warunek `if znak.isupper()` sprawdza, czy dany znak jest **wielką literą** (A-Z). Zwraca `True` dla wielkich liter, `False` w przeciwnym razie.

```python
print('A'.isupper())   # True
print('a'.isupper())   # False
print('5'.isupper())   # False
print('!'.isupper())   # False
```

**Pokrewne metody:**
- `.islower()` – mała litera
- `.isdigit()` – cyfra
- `.isalpha()` – litera (dowolna)
- `.isalnum()` – litera lub cyfra
- `.isspace()` – biały znak

**Zastosowanie w walidacji hasła:**
```python
for znak in haslo:
    if znak.isupper():
        ma_duza = True
```

---

## Pytanie 41
**W jaki sposób można zastosować narzędzie „grupowanie" podczas projektowania w Tinkercad?**

**Grupowanie** (Ctrl + G) w Tinkercad służy do łączenia kilku obiektów w jeden model. Ma dwa główne zastosowania:

1. **Łączenie brył** – zaznaczamy kilka obiektów i grupujemy je w jedną całość:
   - Np. prostopadłościan + dach + okna → model domku

2. **Wycinanie otworów** – ustawiamy bryłę jako „Otwór", a potem grupujemy z innym obiektem:
   - Np. walec (otwór) + prostopadłościan → brelok z dziurką na zawieszenie
   - Np. walce (otwory) + sześcian → kostka do gry z oczkami

**Sposób użycia:**
1. Zaznacz wszystkie elementy (Shift + klik)
2. Kliknij „Grupuj" (Ctrl + G) na pasku narzędzi
3. Obiekty oznaczone jako „Otwór" zostaną wycięte z bryły głównej

Grupowanie jest kluczową operacją w Tinkercad – pozwala tworzyć złożone modele z prostych brył.

---

## Pytanie 42
**Jakie właściwości powinien mieć model 3D, aby nadawał się do druku?**

Model 3D gotowy do druku powinien spełniać następujące wymagania:

1. **Zamknieity (szczelny)** – model musi być bryłą zamkniętą, bez dziur w siatce
2. **Odpowiednia grubość ścian** – minimum **1,5 mm** dla trwałości wydruku
3. **Prawidłowa skala** – wymiary odpowiadające rzeczywistym potrzebom
4. **Brak nakładających się elementów** – wszystkie części muszą być prawidłowo zgrupowane
5. **Odpowiedni format eksportu** – najczęściej **STL** lub OBJ
6. **Elementy wsporcze uwzględnione** – dla wypukłych form należy zaplanować podpory
7. **Zgrupowany model** – wszystkie elementy połączone w jedną bryłę przed eksportem

---

## Pytanie 43
**Czym różni się projektowanie użytkowe (np. brelok) od projektowania ozdobnego?**

| Cecha | Projektowanie użytkowe | Projektowanie ozdobne |
|---|---|---|
| **Cel** | Funkcjonalny przedmiot (brelok, uchwyt, obudowa) | Element dekoracyjny (figurka, rzeźba) |
| **Wymiary** | Precyzyjne, zgodne z rzeczywistością | Dowolne, artystyczne |
| **Wytrzymałość** | Musi wytrzymać użytkowanie | Może być delikatny |
| **Tolerancje** | Ważne (np. otwory na zawieszki) | Mniej istotne |
| **Materiał** | Trwały filament (ABS, PLA+) | Dowolny |
| **Skala** | Musi odpowiadać rzeczywistości | Dowolna |
| **Priorytet** | Funkcjonalność i trwałość | Estetyka i detale |

---

## Pytanie 44
**W jaki sposób geometria modelu wpływa na jakość i czas druku 3D?**

Geometria modelu ma bezpośredni wpływ na druk 3D:

**Wpływ na jakość:**
- **Grubość ścian** – zbyt cienkie ściany mogą pękać; minimum 1,5 mm
- **Zaokrąglenia** – gładkie krawędzie wymagają więcej precyzji, ale wyglądają lepiej
- **Detale** – drobne elementy mogą nie zostać prawidłowo wydrukowane
- **Nawisy** – elementy wystające wymagają podpór

**Wpływ na czas:**
- **Złożoność modelu** – im bardziej skomplikowany kształt, tym dłużej trwa druk
- **Rozmiar obiektu** – większe modele = dłuższy czas druku
- **Wysokość warstw** – niższe warstwy = wyższa jakość, ale dłuższy czas
- **Wypełnienie (infill)** – więcej wypełnienia = mocniejszy wydruk, ale dłuższy czas

---

## Pytanie 45
**Porównaj zalety i wady tworzenia modelu w Tinkercadzie w stosunku do programów profesjonalnych (np. Fusion 360, Blender).**

| Cecha | Tinkercad | Fusion 360 / Blender |
|---|---|---|
| **Łatwość** | Bardzo prosty, intuicyjny | Wymagają długiej nauki |
| **Koszt** | Darmowy | Darmowe (edu) / płatne |
| **Instalacja** | Brak – działa w przeglądarce | Wymagają instalacji |
| **Możliwości** | Podstawowe bryły, grupowanie | Zaawansowane modelowanie, animacja |
| **Precyzja** | Ograniczona | Bardzo wysoka |
| **Współpraca** | Łatwa (chmura, automatyczny zapis) | Bardziej skomplikowana |
| **Eksport** | STL, OBJ | Wiele formatów |
| **Dla kogo** | Początkujący, uczniowie | Profesjonaliści, inżynierowie |

---

## Pytanie 46
**Na czym polega praca z obiektami w przestrzeni trójwymiarowej?**

Praca z obiektami 3D odbywa się w **scenie** – wirtualnej przestrzeni roboczej i obejmuje:

1. **Przesuwanie** – zmiana położenia obiektu wzdłuż osi X, Y, Z
2. **Skalowanie** – zmiana rozmiaru w jednym lub kilku wymiarach
3. **Obracanie** – obrót wokół wybranej osi (-90°, +90° itd.)
4. **Grupowanie** – łączenie kilku obiektów w jeden model
5. **Wycinanie otworów** – tworzenie pustych przestrzeni (bryła ustaw jako „Otwór" → grupuj)

Każdy obiekt ma trzy wymiary: **szerokość, wysokość i głębokość**. Obiekty reprezentowane są przez siatkę wielokątów. Można im przypisać materiał, kolor i inne atrybuty.

---

## Pytanie 47
**W jaki sposób i do jakiego rozszerzenia pliku można wyeksportować model z Tinkercada do druku 3D?**

Model eksportujemy do formatu **STL** (najczęściej używany w drukarkach 3D):

1. Kliknij przycisk **„Eksportuj"** w Tinkercadzie
2. Wybierz format **STL** (lub OBJ)
3. Plik zostanie pobrany na komputer

Następnie plik STL otwieramy w programie do **slicingu** (np. Cura, PrusaSlicer), który dzieli model na warstwy i generuje **G-code** – kod sterujący dla drukarki 3D.

**Ważne:** Przed eksportem upewnij się, że wszystkie elementy modelu są prawidłowo **zgrupowane** i mają odpowiednią **grubość**.

---

## Pytanie 48
**Wymień trzy zalety korzystania z Tinkercada dla początkujących projektantów 3D.**

1. **Bezpłatny i przeglądarkowy** – działa bez instalacji, wystarczy przeglądarka internetowa i dostęp do sieci
2. **Intuicyjny interfejs** – metoda przeciągnij-i-upuść, prosty panel kształtów, łatwe grupowanie brył
3. **Automatyczny zapis w chmurze** – projekty zapisywane automatycznie, dostępne z każdego urządzenia, łatwa współpraca (np. w klasie)

Dodatkowe zalety: szeroka biblioteka gotowych kształtów, możliwość eksportu do STL na druk 3D, materiały edukacyjne i tutoriale.

---

## Pytanie 49
**Czym różni się grafika 2D od 3D?**

| Cecha | Grafika 2D | Grafika 3D |
|---|---|---|
| **Wymiary** | Szerokość i wysokość (X, Y) | Szerokość, wysokość i głębokość (X, Y, Z) |
| **Obraz** | Płaski – rysunek, zdjęcie, schemat | Przestrzenny, z głębią |
| **Obracanie** | Brak możliwości | Obiekt można oglądać pod różnym kątem |
| **Narzędzia** | GIMP, Inkscape | Tinkercad, Blender, Fusion 360 |
| **Zastosowania** | Grafika rastrowa/wektorowa | Gry, animacje, druk 3D, architektura |

Grafika 3D dodaje **trzeci wymiar – głębokość**, co pozwala na realistyczne przedstawienie brył przestrzennych.

---

## Pytanie 50
**Wymień przynajmniej dwa różne filamenty do drukarek 3D.**

1. **PLA (kwas polimlekowy)** – biodegradowalny, łatwy w użyciu, idealny do nauki i modeli dekoracyjnych. Sztywny, ale kruchy.
2. **ABS** – wytrzymalszy i odporny na wysokie temperatury, stosowany do części technicznych.
3. **TPU** – elastyczny filament przypominający gumę, do uszczelek, podeszew, zawiasów.

Najczęstsza technologia druku: **FDM/FFF** – nakładanie cienkich warstw rozgrzanego filamentu.

---

## Pytanie 51
**Wyjaśnij, czym różni się DDL od DML w SQL. Podaj przykłady komend dla obu języków.**

**DDL (Data Definition Language)** – polecenia definiujące **strukturę** bazy danych:
```sql
CREATE TABLE uczniowie (id INT PRIMARY KEY, imie VARCHAR(30));
ALTER TABLE uczniowie ADD COLUMN klasa VARCHAR(10);
DROP TABLE uczniowie;
```

**DML (Data Manipulation Language)** – polecenia manipulujące **danymi** w tabelach:
```sql
INSERT INTO uczniowie (imie, nazwisko) VALUES ('Anna', 'Kowalska');
UPDATE uczniowie SET klasa = '2A' WHERE id_ucznia = 1;
DELETE FROM uczniowie WHERE id_ucznia = 3;
SELECT * FROM uczniowie;
```

| Cecha | DDL | DML |
|---|---|---|
| **Cel** | Definiowanie struktury | Manipulowanie danymi |
| **Komendy** | CREATE, ALTER, DROP | INSERT, UPDATE, DELETE, SELECT |
| **Dotyczy** | Tabel, baz danych | Rekordów (wierszy) |

---

## Pytanie 52
**Jakie kroki należy wykonać, aby utworzyć nową tabelę za pomocą SQL?**

1. **Wybrać bazę danych:** `USE szkola;`
2. **Napisać polecenie CREATE TABLE** z nazwą tabeli i definicją kolumn:

```sql
CREATE TABLE uczniowie (
    id_ucznia INT PRIMARY KEY AUTO_INCREMENT,
    imie VARCHAR(30) NOT NULL,
    nazwisko VARCHAR(40) NOT NULL,
    data_urodzenia DATE,
    klasa VARCHAR(10)
);
```

3. **Zdefiniować dla każdej kolumny:**
   - Nazwę kolumny (np. `imie`)
   - Typ danych (np. `VARCHAR(30)`, `INT`, `DATE`)
   - Ograniczenia (np. `PRIMARY KEY`, `NOT NULL`, `AUTO_INCREMENT`)

4. **Zatwierdzić zapytanie** klikając „Wykonaj" w phpMyAdmin lub kończąc średnikiem w konsoli.

**Ważne:** Nazwy tabel bez spacji i polskich znaków, małe litery, podkreślenia.

---

## Pytanie 53
**Wyjaśnij co to są i do czego służą funkcje agregujące (agregatu SQL).**

Funkcje agregujące to funkcje, które **wykonują obliczenia na zbiorze wartości i zwracają pojedynczy wynik**:

| Funkcja | Opis | Przykład |
|---|---|---|
| `COUNT()` | Liczy liczbę rekordów | `SELECT COUNT(*) FROM uczniowie;` |
| `SUM()` | Sumuje wartości | `SELECT SUM(wartosc) FROM oceny;` |
| `AVG()` | Oblicza średnią | `SELECT AVG(wartosc) FROM oceny;` |
| `MIN()` | Znajduje minimum | `SELECT MIN(wartosc) FROM oceny;` |
| `MAX()` | Znajduje maksimum | `SELECT MAX(wartosc) FROM oceny;` |

Często stosuje się je z `GROUP BY`:
```sql
SELECT kod_przedmiotu, AVG(wartosc) AS srednia
FROM oceny
GROUP BY kod_przedmiotu;
```

Oraz z `ROUND()` do zaokrąglania:
```sql
SELECT ROUND(AVG(wartosc), 2) AS srednia_ocena FROM oceny;
```

---

## Pytanie 54
**Omów jak zaprojektować bazę danych dla szkoły. Opisz klucze, typy danych i relacje.**

**Tabela `uczniowie`:**
```sql
CREATE TABLE uczniowie (
    id_ucznia INT PRIMARY KEY AUTO_INCREMENT,
    imie VARCHAR(30) NOT NULL,
    nazwisko VARCHAR(40) NOT NULL,
    data_urodzenia DATE,
    klasa VARCHAR(10)
);
```

**Tabela `przedmioty`:**
```sql
CREATE TABLE przedmioty (
    kod_przedmiotu VARCHAR(10) PRIMARY KEY,
    nazwa VARCHAR(50) NOT NULL
);
```

**Tabela `nauczyciele`:**
```sql
CREATE TABLE nauczyciele (
    id_nauczyciela INT PRIMARY KEY AUTO_INCREMENT,
    imie VARCHAR(30) NOT NULL,
    nazwisko VARCHAR(40) NOT NULL,
    przedmiot VARCHAR(50)
);
```

**Tabela `oceny`** (łączy dane):
```sql
CREATE TABLE oceny (
    id_oceny INT PRIMARY KEY AUTO_INCREMENT,
    id_ucznia INT,
    kod_przedmiotu VARCHAR(10),
    data_oceny DATE,
    wartosc TINYINT,
    FOREIGN KEY (id_ucznia) REFERENCES uczniowie(id_ucznia),
    FOREIGN KEY (kod_przedmiotu) REFERENCES przedmioty(kod_przedmiotu)
);
```

**Klucze:**
- **Klucz główny (PRIMARY KEY)** – jednoznacznie identyfikuje każdy rekord (np. `id_ucznia`)
- **Klucz obcy (FOREIGN KEY)** – łączy tabele (np. `id_ucznia` w tabeli oceny odnosi się do `uczniowie`)
- **AUTO_INCREMENT** – automatycznie nadaje kolejne numery

---

## Pytanie 55
**Opisz różnice między INNER JOIN, LEFT JOIN i RIGHT JOIN.**

**INNER JOIN** – zwraca tylko rekordy z dopasowaniem w **obu** tabelach:
```sql
SELECT u.imie, o.wartosc
FROM uczniowie u
INNER JOIN oceny o ON u.id_ucznia = o.id_ucznia;
-- Tylko uczniowie MAJĄCY oceny
```

**LEFT JOIN** – zwraca **wszystkie** z lewej tabeli + dopasowane z prawej (NULL jeśli brak):
```sql
SELECT u.imie, o.wartosc
FROM uczniowie u
LEFT JOIN oceny o ON u.id_ucznia = o.id_ucznia;
-- WSZYSCY uczniowie, nawet bez ocen
```

**RIGHT JOIN** – zwraca **wszystkie** z prawej tabeli + dopasowane z lewej (NULL jeśli brak):
```sql
SELECT u.imie, o.wartosc
FROM uczniowie u
RIGHT JOIN oceny o ON u.id_ucznia = o.id_ucznia;
-- WSZYSTKIE oceny, nawet bez przypisanego ucznia
```

---

## Pytanie 56
**Omów składnię polecenia INSERT w MySQL.**

```sql
INSERT INTO nazwa_tabeli (kolumna1, kolumna2, kolumna3)
VALUES (wartosc1, wartosc2, wartosc3);
```

**Elementy:**
1. `INSERT INTO` – wskazuje tabelę docelową
2. Lista kolumn w nawiasie
3. `VALUES` – wartości w tej samej kolejności

**Przykład:**
```sql
INSERT INTO uczniowie (imie, nazwisko, data_urodzenia, klasa)
VALUES ('Anna', 'Kowalska', '2007-05-12', '3A');
```

**Zasady:**
- Kolumny `AUTO_INCREMENT` pomijamy
- Tekst w **apostrofach** (`'Anna'`)
- Wiele rekordów naraz: `VALUES (...), (...), (...);`
- Każde zapytanie kończymy **średnikiem**

---

## Pytanie 57
**Omów składnię polecenia SELECT w MySQL.**

```sql
SELECT kolumna1, kolumna2 FROM nazwa_tabeli;
SELECT * FROM uczniowie;  -- wszystkie kolumny
```

**Filtrowanie (WHERE):**
```sql
SELECT * FROM uczniowie WHERE klasa = '2A';
```

**Sortowanie (ORDER BY):**
```sql
SELECT * FROM uczniowie ORDER BY nazwisko ASC;   -- rosnąco
SELECT * FROM uczniowie ORDER BY nazwisko DESC;  -- malejąco
```

**Projekcja (wybrane kolumny):**
```sql
SELECT imie, nazwisko FROM uczniowie;
```

**Agregacja z GROUP BY:**
```sql
SELECT kod_przedmiotu, COUNT(*) AS liczba_ocen
FROM oceny GROUP BY kod_przedmiotu;
```

**Łączenie tabel (JOIN):**
```sql
SELECT u.imie, o.wartosc
FROM uczniowie u INNER JOIN oceny o ON u.id_ucznia = o.id_ucznia;
```

---

## Pytanie 58
**Jaką rolę pełni język SQL w pracy z bazami danych?**

SQL (Structured Query Language) to **podstawowe narzędzie do pracy z relacyjnymi bazami danych**. Umożliwia:

1. **Tworzenie struktur (DDL):** `CREATE TABLE`, `ALTER TABLE`, `DROP TABLE`
2. **Zarządzanie danymi (DML):** `INSERT`, `UPDATE`, `DELETE`
3. **Pobieranie danych (DQL):** `SELECT` z filtrami, sortowaniem, łączeniem tabel
4. **Kontrola dostępu (DCL):** `GRANT`, `REVOKE`

**Przykłady z życia:**
- Sklep internetowy – pobranie listy produktów
- Biblioteka szkolna – wyszukiwanie książek
- Dziennik elektroniczny – filtrowanie uczniów po nazwisku lub klasie
- Aplikacja pogodowa – dane na podstawie lokalizacji

SQL jest **uniwersalny** – podstawy działają tak samo w MySQL, PostgreSQL, SQLite.

---

## Pytanie 59
**Co oznacza skrót DDL w kontekście SQL?**

**DDL = Data Definition Language** (Język Definicji Danych).

DDL to podgrupa poleceń SQL służących do **definiowania i modyfikowania struktury bazy danych** (tabel, kolumn, kluczy):

- **`CREATE TABLE`** – tworzenie nowej tabeli
- **`ALTER TABLE`** – modyfikacja struktury tabeli (dodawanie/usuwanie kolumn)
- **`DROP TABLE`** – usuwanie tabeli

Przykład:
```sql
CREATE TABLE uczniowie (
    id_ucznia INT PRIMARY KEY AUTO_INCREMENT,
    imie VARCHAR(30) NOT NULL
);
```

DDL różni się od DML (Data Manipulation Language), która operuje na **danych** (INSERT, UPDATE, DELETE).

---

## Pytanie 60
**Jakie podstawowe typy danych można wykorzystać w tabeli MySQL?**

| Typ danych | Opis | Przykład |
|---|---|---|
| `INT` | Liczba całkowita | id_ucznia, wiek |
| `TINYINT` | Mała liczba całkowita (0-255) | ocena (1-6) |
| `VARCHAR(n)` | Tekst o zmiennej długości (max n znaków) | imie, nazwisko |
| `CHAR(n)` | Tekst o stałej długości | kod_pocztowy |
| `DATE` | Data (RRRR-MM-DD) | data_urodzenia |
| `FLOAT` | Liczba zmiennoprzecinkowa | srednia |
| `DECIMAL(p,s)` | Liczba z dokładnym ułamkiem | cena |
| `TEXT` | Długi tekst | opis |
| `BOOLEAN` | Wartość logiczna (TRUE/FALSE) | aktywny |

**Dobre praktyki:** Oceny jako `TINYINT`, daty jako `DATE` (nie tekst), imiona jako `VARCHAR(30)`.
