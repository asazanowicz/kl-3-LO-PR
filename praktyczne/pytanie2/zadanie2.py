# Zadanie 2 – Znaki ASCII 32–47
# Program wyświetla wszystkie znaki z zakresu ASCII od 32 do 47, po 4 w wierszu

def wyswietl_ascii():
    """Wyświetla znaki ASCII od 32 do 47, po 4 w wierszu"""
    licznik = 0
    
    for kod in range(32, 48):  # od 32 do 47 (48 jest wyłączone)
        znak = chr(kod)
        print(f"{znak}", end=" ")
        licznik += 1
        
        # Po wyświetleniu 4 znaków przechodzimy do nowej linii
        if licznik % 4 == 0:
            print()  # nowa linia

if __name__ == "__main__":
    print("Znaki ASCII 32-47 (po 4 w wierszu):")
    print("-" * 30)
    wyswietl_ascii()
