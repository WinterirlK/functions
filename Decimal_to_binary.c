char *decimal_to_binary(int liczba){
    
    if (liczba == 0) {
        char *tab = (char*)malloc(sizeof(char)*2);
        tab[0] = '0';
        tab[1] = '\0';
        return tab;
    }
    int licznik_operacji = 0;
    int licznik_bitow = 1;
    while (licznik_bitow <= liczba) {
        licznik_bitow *= 2; // 2 // 4 // 8 // 16 // 32
        licznik_operacji += 1;
    }
    licznik_bitow /= 2;
    char *kod_binarny = (char*)malloc(sizeof(char) * (licznik_operacji + 1));

    int i = 0;
    while (licznik_bitow > 0) {
        if (liczba >= licznik_bitow) {
            liczba = liczba - licznik_bitow;
            kod_binarny[i] = '1';
        } else {
            kod_binarny[i] = '0';
        }
        licznik_bitow /= 2;
        i++;
    }

    kod_binarny[i] = '\0';

    return kod_binarny;
    
}
