# Odpowiedzi – Test W2 Informatyka Klasa 3 LO (Pytania 61–96)

> Pytania wielokrotnego wyboru – prawidłowe odpowiedzi zaznaczone **pogrubieniem**.

---

## Pytanie 61
**Które algorytmy sortowania mają złożoność czasową O(n²) w najgorszym przypadku?**

- **a. Sortowanie bąbelkowe** ✅
- **b. Sortowanie przez wstawianie** ✅
- **c. Sortowanie przez wybieranie** ✅
- d. Sortowanie szybkie – w najgorszym O(n²), ale średnio O(n log n)
- e. Sortowanie kubełkowe – średnio O(n + k)

> Sortowanie bąbelkowe, przez wstawianie i przez wybieranie mają złożoność O(n²) w najgorszym przypadku. Quick Sort ma O(n²) w najgorszym przypadku (np. posortowane dane), ale zazwyczaj klasyfikowany jest jako O(n log n) średnio.

---

## Pytanie 62
**Które zdania są prawdziwe o złotym podziale i ciągu Fibonacciego?**

- a. Złoty podział wynosi dokładnie 1,5 – ❌ (wynosi ~1,618)
- **b. Złoty podział to stosunek dwóch kolejnych wyrazów ciągu Fibonacciego** ✅
- c. Występuje tylko w liczbach całkowitych – ❌
- d. Ciąg zaczyna się od 1 i 2 – ❌ (zaczyna się 0, 1 lub 1, 1)
- **e. Występuje w przyrodzie (np. muszle, rośliny)** ✅
- **f. Każdy wyraz to suma dwóch poprzednich** ✅

> Złoty podział (φ ≈ 1,618) to granica stosunku kolejnych wyrazów ciągu Fibonacciego. Występuje w naturze – muszle ślimaka, układ liści, spirale słonecznika.

---

## Pytanie 63
**Które algorytmy są sortowaniami porównawczymi?**

- **a. Sortowanie przez wybieranie** ✅
- b. Sortowanie kubełkowe – ❌ (sortowanie dystrybucyjne)
- c. Sortowanie przez zliczanie – ❌ (sortowanie dystrybucyjne)
- **d. Sortowanie szybkie** ✅
- **e. Sortowanie bąbelkowe** ✅
- **f. Sortowanie przez wstawianie** ✅

> Sortowania porównawcze opierają się na porównywaniu par elementów. Kubełkowe i przez zliczanie to sortowania dystrybucyjne – rozdzielają elementy bez bezpośredniego porównywania.

---

## Pytanie 64
**Jaki jest pierwszy wyraz ciągu Fibonacciego?**

- a. 2
- b. 0
- c. -1
- **d. 1** ✅

> Ciąg Fibonacciego: 1, 1, 2, 3, 5, 8, 13, 21... (w niektórych definicjach zaczyna się od 0, 1). W kontekście podręcznika pierwszy wyraz to **1**.

---

## Pytanie 65
**Dlaczego warto sortować dane przed ich przetwarzaniem?**

- **a. Dla skrócenia czasu dostępu i wyszukiwania** ✅
- b. Aby ukryć dane – ❌
- c. Aby usunąć wszystkie liczby – ❌
- d. Aby poprawić estetykę – ❌

> Posortowane dane umożliwiają wyszukiwanie binarne O(log n) zamiast liniowego O(n).

---

## Pytanie 66
**Na czym polega sortowanie bąbelkowe?**

- a. Wyszukuje medianę i dzieli tablicę – ❌ (to Quick Sort)
- **b. Porównuje sąsiednie elementy i zamienia je miejscami, jeśli są w złej kolejności** ✅
- c. Sortuje tablicę od środka do końców – ❌
- d. Kopiuje dane do innej tablicy – ❌

> Bubble Sort wielokrotnie przechodzi przez listę, porównując sąsiednie elementy i zamieniając je, aż lista jest posortowana.

---

## Pytanie 67
**Które elementy składni Pythonowej pozwalają pisać algorytmy w krótszy i bardziej czytelny sposób?**

- a. Import biblioteki math – ❌ (nie skraca zapisu algorytmu)
- **b. Wyrażenia listowe** ✅
- **c. Wielokrotne przypisania (np. a, b = b, a+b)** ✅
- d. Klasy – ❌ (raczej wydłużają)
- e. Funkcje anonimowe – ❌ (nie kluczowe dla zwięzłości)
- f. Pętle while – ❌ (standardowa składnia, nie skraca)

> Wyrażenia listowe (`[x for x in lista if x > 0]`) i wielokrotne przypisania (`a, b = b, a+b` – np. w Fibonaccim) to kluczowe cechy Pythona pozwalające na zwięzły zapis.

---

## Pytanie 68
**Dlaczego algorytm Bucket Sort nie działałby poprawnie dla liczb ujemnych w obecnym zapisie?**

- a. Bo kubełki są tylko do odczytu – ❌
- b. Bo append() nie działa na liczbach – ❌
- c. Bo zakres nie jest ograniczony do [0, 1] – ❌
- d. Bo nie ma instrukcji if – ❌
- e. Bo sort() nie działa na listach – ❌
- **f. Bo index = int(liczba * n) może wyjść poza zakres** ✅

> Wzór `index = int(liczba * n)` dla liczby ujemnej daje ujemny indeks, co spowoduje błąd lub przypisanie do złego kubełka. Bucket Sort w podstawowej wersji zakłada dane z zakresu [0, 1).

---

## Pytanie 69
**Które konstrukcje języka Python mogą ułatwiać pisanie zwięzłych i wydajnych algorytmów?**

- a. Brak klamer {} – ❌ (to cecha, ale nie „konstrukcja")
- **b. Wielokrotne przypisania** ✅
- c. Użycie print() zamiast debuggera – ❌
- **d. Wbudowana funkcja sort()** ✅
- **e. Wyrażenia listowe** ✅
- **f. Dynamiczne typowanie** ✅
- g. Obowiązkowe return – ❌ (return nie jest obowiązkowe w Pythonie)

---

## Pytanie 70
**Dlaczego ciąg Fibonacciego nie jest algorytmem sortującym?**

- a. Bo nie działa na listach – ❌
- b. Bo zwraca tylko najmniejszy element – ❌
- **c. Bo generuje ciąg liczb, a nie zmienia ich kolejności** ✅
- d. Bo nie korzysta z instrukcji if – ❌

> Ciąg Fibonacciego to algorytm **generujący** sekwencję liczb (1, 1, 2, 3, 5, 8...), a sortowanie polega na **zmianie kolejności** istniejących elementów.

---

## Pytanie 71
**Dlaczego range() działa tylko na liczbach całkowitych?**

- a. Bo range to funkcja z C++ – ❌
- b. Bo Python nie wspiera dziesiętnych – ❌
- **c. Bo range to iterator po indeksach listy** ✅
- d. Bo range tworzy tablicę bajtów – ❌

> `range()` generuje sekwencję indeksów (liczb całkowitych). Indeksy z definicji muszą być liczbami całkowitymi.

---

## Pytanie 72
**Dlaczego zapis `for x in lista if x > 0` działa w Pythonie?**

- a. Bo x musi być większe niż 0 – ❌
- **b. Bo for może zawierać if w warunku listowym** ✅
- c. Bo to jest funkcja z math – ❌
- d. Bo Python wymusza sortowanie – ❌

> To wyrażenie listowe (list comprehension): `[x for x in lista if x > 0]`. Python pozwala na łączenie `for` z `if` wewnątrz nawiasów kwadratowych.

---

## Pytanie 73
**Które operacje są typowe podczas pracy z łańcuchami znaków w C++?**

- **a. Porównywanie stringów** ✅
- **b. Szyfrowanie danych** ✅
- **c. Zamiana stringa na liczbę** ✅
- d. Kompresja tekstu – ❌ (zaawansowane, nie omawiane)
- e. Sortowanie tekstu w porządku malejącym – ❌
- **f. Łączenie tekstów (konkatenacja)** ✅

> W podręczniku omówiono: porównywanie (`==`, `<`), konkatenację (`+`), konwersję (`stoi()`), szyfrowanie (szyfr Cezara z `char`).

---

## Pytanie 74
**Jakie elementy można analizować podczas przetwarzania danych tekstowych?**

- **a. Duplikaty w ciągach tekstowych** ✅
- b. Zawartość plików graficznych – ❌
- c. Ścieżki katalogów systemowych – ❌
- **d. Częstotliwość występowania słów** ✅
- **e. Wielkość liter w nazwie pliku** ✅
- **f. Liczba znaków specjalnych** ✅

> Przetwarzanie tekstu obejmuje: analizę duplikatów, zliczanie częstotliwości, sprawdzanie wielkości liter i znaków specjalnych (np. walidacja hasła, e-maila).

---

## Pytanie 75
**W jakich zastosowaniach przydatny jest algorytm wyszukiwania wzorca?**

- **a. Sprawdzanie poprawności e-maila** ✅
- b. Szyfrowanie wiadomości – ❌ (szyfrowanie ≠ wyszukiwanie)
- **c. Wyszukiwanie słów kluczowych** ✅
- **d. System podpowiedzi wyszukiwarki** ✅
- e. Porównywanie dwóch plików binarnych – ❌
- f. Operacje na liczbach zmiennoprzecinkowych – ❌
- g. Analiza danych z czujników – ❌

> Wyszukiwanie wzorca to szukanie podciągu w tekście – kluczowe w walidacji e-maili (szukanie @), wyszukiwarkach i systemach podpowiedzi.

---

## Pytanie 76
**Co oznacza skrót ASCII?**

- a. Advanced Symbolic Character Integration – ❌
- **b. American Standard Code for Information Interchange** ✅
- c. American System for Character Input Interface – ❌
- d. Automatic Standard Character Input Interface – ❌

> ASCII = American Standard Code for Information Interchange – standard kodowania znaków przypisujący liczbom 0-127 znaki (litery, cyfry, symbole).

---

## Pytanie 77
**Który z poniższych warunków powinien spełniać bezpieczny e-mail?**

- a. Zawierać tylko cyfry – ❌
- b. Zaczynać się od „www." – ❌
- c. Nie zawierać żadnych znaków specjalnych – ❌ (@ jest znakiem specjalnym!)
- **d. Zawierać znak „@" oraz kropkę po nim** ✅

> Poprawny e-mail wymaga: znaku `@` (nie na początku), domeny z kropką po `@` (np. `imie@domena.pl`).

---

## Pytanie 78
**Jakim typem danych w języku C++ przechowujemy pojedynczy znak?**

- a. bool – ❌
- **b. char** ✅
- c. int – ❌
- d. string – ❌

> Typ `char` przechowuje jeden znak (8 bitów, kod ASCII 0-255). `string` to łańcuch wielu znaków.

---

## Pytanie 79
**Które funkcje wbudowane w Pythonie pojawiły się w algorytmach szyfrujących i deszyfrujących?**

- a. split() – ❌
- **b. ord()** ✅
- **c. isupper()** ✅
- d. pow() – ❌
- **e. chr()** ✅
- f. isnumeric() – ❌

> W szyfrze Cezara: `ord()` zamienia znak na kod ASCII, `chr()` zamienia kod na znak, `isupper()` sprawdza wielkość litery (by zachować wielkość znaków).

---

## Pytanie 80
**Jakie cechy powinien mieć algorytm, który wyszukuje fragment tekstu w innym tekście?**

- **a. Powinien przechodzić po każdym znaku** ✅
- b. Powinien ignorować wielkość liter – ❌ (opcjonalnie, nie jest wymagane)
- c. Powinien odwracać tekst – ❌
- **d. Powinien porównywać kolejne znaki z wzorcem** ✅
- e. Powinien sprawdzać tylko pierwszy znak – ❌
- **f. Powinien zatrzymać się po znalezieniu dopasowania** ✅

> Algorytm wyszukiwania wzorca: iteruje po tekście (a), porównuje znaki z wzorcem (d) i zatrzymuje się po znalezieniu (f).

---

## Pytanie 81
**Jakie umiejętności pokazuje algorytm, który zapisuje tylko unikalne sąsiednie słowa do listy?**

- a. Wyszukiwanie duplikatów w całej liście – ❌ (tylko sąsiednie)
- b. Filtrowanie na podstawie długości tekstu – ❌
- c. Pętla nieskończona z warunkiem zakończenia – ❌
- **d. Liczenie dodanych elementów** ✅
- **e. Tworzenie listy przez dodawanie elementów** ✅
- **f. Użycie zmiennej pomocniczej do porównań** ✅
- **g. Porównywanie dwóch kolejnych wartości** ✅

> Algorytm filtrowania unikalnych sąsiednich: porównuje kolejne wartości (g), używa zmiennej pomocniczej (f) do zapamiętania poprzedniej, tworzy nową listę przez `append()` (e) i liczy dodane elementy (d).

---

## Pytanie 82
**Jaką funkcję w Pythonie wykorzystuje się do sprawdzenia, czy znak należy do alfabetu?**

- a. isspace() – ❌ (sprawdza biały znak)
- **b. isalpha()** ✅
- c. isdigit() – ❌ (sprawdza cyfrę)
- d. isupper() – ❌ (sprawdza wielką literę)

> `isalpha()` zwraca `True` jeśli znak jest literą (A-Z, a-z).

---

## Pytanie 83
**Co sprawdza linia `if i < 2 or i == -1:` w kodzie walidacji e-maila?**

- **a. Czy znak @ znajduje się co najmniej na trzeciej pozycji lub czy w ogóle występuje** ✅
- b. Czy znak @ znajduje się na końcu adresu – ❌
- c. Czy znak @ występuje więcej niż raz – ❌
- d. Czy adres e-mail ma mniej niż dwa znaki – ❌

> `i == -1` → `find('@')` zwróciło -1, czyli @ nie istnieje. `i < 2` → @ jest na pozycji 0 lub 1, czyli za blisko początku (potrzebne min. 2 znaki przed @).

---

## Pytanie 84
**Co oznacza wartość -1 zwracana na końcu funkcji wyszukiwania wzorca?**

- **a. Wzorzec nie został znaleziony w tekście** ✅
- b. Tekst jest pusty – ❌
- c. Błąd krytyczny w programie – ❌
- d. Wzorzec znajduje się na końcu tekstu – ❌

> Zwracanie -1 to konwencja oznaczająca „nie znaleziono" (tak samo jak `find()` w Pythonie i `string::npos` w C++).

---

## Pytanie 85
**Jakie dwie podstawowe bryły zastosowano podczas tworzenia obiektu (domek)?**

- a. ostrosłup – ❌
- **b. prostopadłościan** ✅
- c. stożek – ❌
- **d. dach** ✅
- e. gwiazda – ❌
- f. klin – ❌

> Typowy model domku w Tinkercadzie składa się z **prostopadłościanu** (korpus) i bryły **dach** (kształt dachu).

---

## Pytanie 86
**Które z poniższych elementów ułatwiają poruszanie się po scenie w Tinkercadzie?**

> W Tinkercadzie poruszanie po scenie zapewniają: **kółko myszy** (zoom), **prawy przycisk myszy** (obracanie widoku), **środkowy przycisk** (przesuwanie), **ViewCube** (widok z góry/boku/przodu). Odpowiedzi zależą od dostępnych opcji w teście.

---

## Pytanie 87
**Co należy uwzględnić, projektując kostkę do gry w Tinkercadzie?**

- **a. Prawidłowy rozkład otworów (oczek)** ✅
- **b. Zaokrąglone krawędzie** ✅
- **c. Pozycjonowanie oczek względem środka ściany** ✅
- d. Eksport do formatu GIF – ❌ (GIF to grafika, nie model 3D)
- e. Efekty świetlne – ❌ (Tinkercad nie obsługuje)
- **f. Skalę odpowiadającą rzeczywistości** ✅
- g. Możliwość otwierania modelu – ❌ (kostka jest bryłą zamkniętą)

> Kostka do gry wymaga: prawidłowy układ oczek (a), zaokrąglone krawędzie (b), centrowanie oczek (c) i realistyczna skala (f). Oczka tworzy się jako otwory (walce) i grupuje z sześcianem.

---

## Pytanie 88
**Który z poniżej wymienionych programów służy do tworzenia obiektów 3D?**

- a. Visual Studio Code – ❌ (edytor kodu)
- b. Inkscape – ❌ (grafika wektorowa 2D)
- c. Gimp – ❌ (grafika rastrowa 2D)
- **d. Tinkercad** ✅

> Tinkercad to przeglądarkowe narzędzie do modelowania 3D. VS Code, Inkscape i GIMP to narzędzia 2D / programistyczne.

---

## Pytanie 89
**Drukarka 3D drukuje za pomocą...**

- a. tuszu – ❌ (drukarki atramentowe)
- b. proszku – ❌ (technologia SLS)
- **c. filamentu** ✅
- d. wosku – ❌

> Drukarki FDM/FFF drukują za pomocą **filamentu** – cienkiego drutu z tworzywa (PLA, ABS, TPU) nawiniętego na szpulę.

---

## Pytanie 90
**Jaka jednostka miary jest domyślnie stosowana w Tinkercadzie?**

- a. Cal – ❌
- b. Piksel – ❌ (grafika rastrowa)
- **c. Milimetr** ✅
- d. Centymetr – ❌

> Tinkercad domyślnie pracuje w **milimetrach** (mm).

---

## Pytanie 91
**Które komendy są wykorzystywane w języku DML (Data Manipulation Language)?**

- a. ALTER – ❌ (DDL)
- **b. UPDATE** ✅
- c. DROP – ❌ (DDL)
- **d. INSERT** ✅
- e. GRANT – ❌ (DCL)
- f. CREATE – ❌ (DDL)

> DML = `INSERT`, `UPDATE`, `DELETE`, `SELECT`. DDL = `CREATE`, `ALTER`, `DROP`. DCL = `GRANT`, `REVOKE`.

---

## Pytanie 92
**Zapytanie SQL na podstawie tabel**

> To pytanie wymaga analizy konkretnych tabel i opcji z testu. Odpowiedź zależy od danych wizualnych niedostępnych w wersji tekstowej.

---

## Pytanie 93
**Na podstawie poniższej kwerendy zaznacz poprawne wyrażenia.**

- **a. Kwerenda wykorzystuje funkcję agregującą AVG(), dlatego musi zawierać GROUP BY** ✅
- b. Aliasy tabel (u, o, p, n) są wymagane, aby kwerenda działała poprawnie – ❌ (aliasy ułatwiają pisanie, ale nie są wymagane)
- **c. Warunek n.przedmiot = p.kod_przedmiotu łączy nauczyciela z nauczanym przez niego przedmiotem** ✅
- d. Pole srednia_ocena jest obliczane niezależnie od tabeli oceny – ❌ (AVG oblicza z tabeli oceny)
- e. Połączenie nauczyciele z uczniowie następuje bezpośrednio przez id_ucznia – ❌ (łączy przez tabelę oceny/przedmioty)
- **f. ROUND(AVG(o.wartosc), 2) służy do zaokrąglenia średniej oceny do dwóch miejsc po przecinku** ✅
- g. Kwerenda zwraca tylko jedną wartość dla każdego ucznia – jego średnią ze wszystkich przedmiotów – ❌ (zwraca średnią per przedmiot/nauczyciel, zależy od GROUP BY)

---

## Pytanie 94
**Poleceniem języka SQL należącym do grupy DQL jest...**

- a. INSERT – ❌ (DML)
- b. DROP – ❌ (DDL)
- **c. SELECT** ✅
- d. CREATE – ❌ (DDL)

> DQL = Data Query Language. Jedynym poleceniem DQL jest **SELECT** – służy do pobierania danych z bazy.

---

## Pytanie 95
**Relacyjne bazy danych informacje czyli dane przechowują w...**

- a. grafach – ❌ (grafowe bazy danych)
- b. tablicach – ❌ (to pojęcie programistyczne)
- **c. tabelach** ✅
- d. kolekcjach – ❌ (bazy dokumentowe, np. MongoDB)

> Relacyjne bazy danych przechowują dane w **tabelach** (tabela = relacja), złożonych z **wierszy** (rekordów) i **kolumn** (atrybutów).

---

## Pytanie 96
**Atrybutem tabeli jest...**

- a. wiersz – ❌ (to rekord/krotka)
- b. nagłówek – ❌
- **c. kolumna** ✅
- d. krotka – ❌ (to wiersz)

> W relacyjnych bazach danych: **kolumna = atrybut** (pole), **wiersz = rekord (krotka)**. Np. kolumna `imie` to atrybut tabeli `uczniowie`.
