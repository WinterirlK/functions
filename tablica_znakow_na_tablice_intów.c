int* char_to_int(char* tablica_znakow, int* size) {
    int size_of_array = 0;
    while (tablica_znakow[size_of_array] != '\0') {
        size_of_array++; // liczenie rozmiaru tablicy znakow
    }
    *size = size_of_array;
    int* tablica_intow = (int*)malloc(sizeof(int) * (*size));
    for (int i = 0; i < size_of_array; i++) {
        tablica_intow[i] = (int)tablica_znakow[i]-48; // tablica ascii(trzeba odjac 48 aby uzyskac prawidlowa liczbe)
    }

    return tablica_intow;
}

int main(){
  int size; // rozmiar tablicy intow
  char tablica_znakow[] = {"249178890"};
  int* tablica_intow = char_to_int(tablica_znakow, &size);

  for (int i = 0; i < size; i++) {
        printf("%d ", tablica_intow[i]); // wyswietlenie tablicy intów
    }

    free(tablica_intow);
  
}
