# Zadania praktyczne – Informatyka 3 LO (Poziom Rozszerzony)

---

## Zadanie 1 – Kody Unicode emoji
Sprawdź za pomocą internetowego narzędzia (np. Unicode Table), jakie kody mają następujące emoji:
- 🧀 (ser)
- 💡 (żarówka)
- 🧠 (mózg)
- ✏️ (ołówek)
- ✈️ (samolot)
- 🪣 (łopata)

Otwórz plik `odpowiedzi.docx` znajdujący się w folderze egzaminacyjnym i uzupełnij tabelę znalezionymi kodami.

---

## Zadanie 2 – Znaki ASCII 32–47
Napisz program, który wyświetli wszystkie znaki z zakresu ASCII od 32 do 47 (czyli m.in. spację, znak `!`, `"` i inne znaki specjalne), po 4 w wierszu.

---

## Zadanie 3 – Porównywanie hasła (C++)
Napisz program w języku C++, który:
1. Wczyta od użytkownika dane wejściowe – proponowane hasło.
2. Porówna wprowadzone hasło z hasłem zapisanym w zmiennej typu `string`.
3. W przypadku zgodności wyświetli komunikat: `"Dostęp przyznany."`, a w przeciwnym razie: `"Błędne hasło."`

Hasło zapisane w programie (w zmiennej) to: **Informatyka20!**

> **Uwagi:** Zastosuj instrukcję warunkową do porównania danych. Pamiętaj o użyciu odpowiednich bibliotek standardowych C++.

---

## Zadanie 4 – Imię schodkowe (C++)
Napisz program w języku C++, który:
- Wczyta z klawiatury imię (ciąg znaków),
- Wyświetli imię w postaci schodkowej, tzn. z każdą kolejną linią dodawaną jedną literą więcej.

**Przykład** dla wejścia `Anna`:
```
A
An
Ann
Anna
```

---

## Zadanie 5 – Sortowanie wyrazów (C++)
Napisz program, który:
- Wczyta z klawiatury 5 wyrazów,
- Posortuje je alfabetycznie,
- Wyświetli je w porządku rosnącym (A–Z).

---

## Zadanie 6 – Zliczanie litery „a" (C++)
Napisz program, który:
- Wczyta z klawiatury jedno zdanie,
- Policzy, ile razy występuje w nim litera `a` (zarówno mała, jak i wielka litera `A`),
- Wyświetli wynik.

---

## Zadanie 7 – Filtrowanie imion na „K" (C++)
Napisz program, który:
- Wczyta od użytkownika 10 imion,
- Wypisze tylko te, które rozpoczynają się literą `K`.

---

## Zadanie 8 – Połączenie wyrazów odwrotnie (C++)
Napisz program, który:
- Wczyta z klawiatury dwa wyrazy,
- Połączy je w jeden ciąg w odwrotnej kolejności (najpierw drugi, potem pierwszy),
- Wyświetli wynik.

**Przykład:** dla wejścia `kot` i `pies` → wynik: `pieskot`

---

## Zadanie 9 – Wyszukiwanie wzorca w tekście (C++)
Napisz program w C++, który:
- Wczyta z klawiatury tekst (np. zdanie),
- Wczyta z klawiatury słowo (czyli wzorzec),
- Sprawdzi, czy to słowo występuje w tekście,
- Jeśli tak – wypisze `"Znaleziono wzorzec!"` i jego pozycję w tekście (od zera),
- Jeśli nie – wypisze `"Wzorzec nie został znaleziony."`

---

## Zadanie 10 – Powtórzony wzorzec (C++)
Napisz program, który:
- Pyta o wzorzec (np. słowo),
- Pyta o długi tekst,
- Informuje, czy dane słowo powtórzyło się więcej niż raz.

---

## Zadanie 11 – Łamanie szyfru Cezara brute-force (C++)
Napisz program w języku C++ łamiący szyfr Cezara metodą siłową.

---

## Zadanie 12 – Sprawdzanie uporządkowania tablicy (C++)
Napisz program sprawdzający, czy tablica 10 liczb jest uporządkowana. Program powinien najpierw wczytać liczby do tablicy.

---

## Zadanie 13 – Para o największej różnicy (C++)
Napisz program, który po wczytaniu 10 liczb dodatnich całkowitych znajdzie wśród nich parę liczb o największej różnicy:
- a) bez sortowania danych,
- b) po posortowaniu danych.

---

## Zadanie 14 – Sortowanie malejące (C++)
Napisz program, który będzie porządkować malejąco tablicę 10 różnych liczb metodą:
- a) bąbelkową,
- b) przez wstawianie.

---

## Zadanie 15 – Brelok do kluczy (Tinkercad)
Zaprojektuj prosty brelok do kluczy o wymiarach:
- Długość: **20 mm**
- Szerokość: **10 mm**
- Wysokość: **2 mm**

**Wymagania:**
1. Zaokrąglij rogi breloka (ustaw promień zaokrąglenia na 2 mm).
2. Dodaj **dziurkę na zawieszenie**: walec o średnicy 3–4 mm, ustawiony w górnej części breloka (z zachowaniem odstępu od krawędzi).
3. Wstaw **tekst 3D** z napisem np. „SALA 10" lub własnym imieniem.
4. Ustaw tekst jako wypukły lub zagłębiony.

---

## Zadanie 16 – Kostka do gry (Tinkercad)
Zaprojektuj kostkę do gry o wymiarach **20×20×20 mm**.

**Wymagania:**
1. Utwórz sześcian z zaokrąglonymi krawędziami (promień: 2 mm).
2. Na każdej ze ścian dodaj **otwory w kształcie walców**, rozmieszczając je zgodnie z tradycyjnym układem oczek (od 1 do 6).
3. Każdy walec powinien mieć średnicę ok. 4 mm i być zagłębiony.
4. Ustaw kostkę w przestrzeni tak, aby była widoczna w widoku izometrycznym.
5. Zastosuj jednolity kolor oraz **zgrupuj model** przed eksportem.

---

## Zadanie 17 – Model domku (Tinkercad)
Zaprojektuj model prostego domku z otworami i dachem.

**Wymagania:**
1. Utwórz bazową bryłę – prostopadłościan o wymiarach np. 90×50 mm.
2. Skorzystaj z techniki **duplikowania i wycinania**, aby uzyskać pustą przestrzeń wewnątrz domku (ściany).
3. Wykonaj **otwór drzwiowy** (prostokątny otwór na jednej ze ścian).
4. Dodaj **dach** z dostępnej bryły i odpowiednio go dopasuj.
5. Umieść **okna**: wybierz gotowe z biblioteki lub wykonaj jako otwory.
6. Dopasuj kolory ścian, dachu i okien.
7. Zgrupuj wszystkie elementy w jeden spójny model.

---

## Zadanie 18 – Tworzenie bazy danych „szkola" (SQL)
W phpMyAdmin utwórz nową bazę danych o nazwie `szkola`. Ustaw kodowanie znaków na `utf8` oraz porównywanie napisów na `utf8_polish_ci`.

**Utwórz następujące tabele:**

### Tabela `uczniowie`
| Kolumna | Typ | Uwagi |
|---|---|---|
| `id_ucznia` | INT | klucz główny, AUTO_INCREMENT |
| `imie` | VARCHAR(30) | NOT NULL |
| `nazwisko` | VARCHAR(40) | NOT NULL |
| `data_urodzenia` | DATE | |
| `klasa` | VARCHAR(10) | |

### Tabela `nauczyciele`
| Kolumna | Typ | Uwagi |
|---|---|---|
| `id_nauczyciela` | INT | klucz główny, AUTO_INCREMENT |
| `imie` | VARCHAR(30) | NOT NULL |
| `nazwisko` | VARCHAR(40) | NOT NULL |
| `przedmiot` | VARCHAR(50) | |

### Tabela `przedmioty`
| Kolumna | Typ | Uwagi |
|---|---|---|
| `kod_przedmiotu` | VARCHAR(10) | klucz główny |
| `nazwa` | VARCHAR(50) | NOT NULL |

### Tabela `oceny`
| Kolumna | Typ | Uwagi |
|---|---|---|
| `id_oceny` | INT | klucz główny, AUTO_INCREMENT |
| `id_ucznia` | INT | klucz obcy → `uczniowie(id_ucznia)` |
| `kod_przedmiotu` | VARCHAR(10) | klucz obcy → `przedmioty(kod_przedmiotu)` |
| `data_oceny` | DATE | |
| `wartosc` | TINYINT | |

---

## Zadanie 19 – Modyfikacja danych w bazie (SQL)
W phpMyAdmin utwórz bazę `szkola` (utf8 / utf8_polish_ci). Zaimportuj dane z pliku `szkola.sql` z folderu egzaminacyjnego.

**Zmodyfikuj dane w tabeli:**
- Zmień datę urodzenia ucznia **„Oskar Rutkowski"** na `2007-11-15`
- Usuń z bazy danych ucznia o nazwisku **„Walczak"**
- Zaktualizuj nazwę przedmiotu `matematyka` na `matematyka rozszerzona`
- Usuń ocenę ucznia o identyfikatorze 2 z przedmiotu `"BIO"`
- Wyświetl uczniów, którzy w imieniu posiadają literkę `"l"` → wykonaj zrzut ekranu tabeli wynikowej i wklej do MS Word

Wykonaj eksport bazy danych `szkola` do pliku `.sql` za pomocą phpMyAdmin. Zapisz plik pod nazwą `szkola2.sql` na pulpicie komputera.

---

## Zadanie 20 – Kwerendy SQL
W phpMyAdmin utwórz bazę `szkola` (utf8 / utf8_polish_ci). Zaimportuj dane z pliku `szkola.sql`. Wykonaj poniższe kwerendy – każdą udokumentuj zrzutem ekranu w pliku MS Word.

1. Wyświetl wszystkie kolumny z tabeli `uczniowie`.
2. Pokaż nazwiska wszystkich nauczycieli uczących przedmiotów o kodzie zaczynającym się na literę `"P"`.
3. Znajdź wszystkich uczniów urodzonych po 1 stycznia 2007 roku.
4. Wyświetl nazwiska uczniów z klasy `"2B"`, posortowane alfabetycznie rosnąco.
5. Wyświetl wszystkie oceny, których wartość wynosi 4 lub więcej.
6. Pokaż imię i nazwisko uczniów oraz ocenę z przedmiotu „Informatyka".
7. Dla każdego ucznia podaj liczbę ocen, które otrzymał.
8. Wyświetl średnią ocen z każdego przedmiotu. W wynikach pokaż również nazwę przedmiotu.
9. Wyświetl imię i nazwisko ucznia oraz nazwę przedmiotu i ocenę, jaką otrzymał.
10. Dla każdego przedmiotu podaj maksymalną wartość oceny.
