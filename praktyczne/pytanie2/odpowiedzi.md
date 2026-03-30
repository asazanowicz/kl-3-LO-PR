# Zadanie 2 – Znaki ASCII 32–47

## Treść zadania
Napisz program, który wyświetli wszystkie znaki z zakresu ASCII od 32 do 47 (czyli m.in. spację, znak `!`, `"` i inne znaki specjalne), po 4 w wierszu.

## Rozwiązanie

Program w Pythonie: `zadanie2.py`

### Wynik działania programu:

```
Znaki ASCII 32-47 (po 4 w wierszu):
------------------------------
  ! " # 
$ % & ' 
( ) * + 
, - . / 
```

### Wyjaśnienie:
- Używamy funkcji `chr(kod)` do konwersji kodu ASCII na znak
- Zakres `range(32, 48)` generuje liczby od 32 do 47 (48 jest wyłączone)
- Zmienna `licznik` śledzi ilość wyświetlonych znaków
- Po każdych 4 znakach (gdy `licznik % 4 == 0`) przechodzimy do nowej linii
- Pierwszy znak (kod 32) to spacja

### Znaki ASCII 32-47:
| Kod | Znak | Opis |
|-----|------|------|
| 32 | ` ` | spacja |
| 33 | ! | wykrzyknik |
| 34 | " | cudzysłów |
| 35 | # | hash/kratka |
| 36 | $ | dolar |
| 37 | % | procent |
| 38 | & | ampersand |
| 39 | ' | apostrof |
| 40 | ( | nawias lewy |
| 41 | ) | nawias prawy |
| 42 | * | gwiazdka |
| 43 | + | plus |
| 44 | , | przecinek |
| 45 | - | minus/myślnik |
| 46 | . | kropka |
| 47 | / | ukośnik |
