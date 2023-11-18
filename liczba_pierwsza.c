int liczba_pierwsza(int liczba){
    if(liczba == 2){
        return 1;
    }
    if(liczba == 1){
        return 0;
    }
    int licznik = 0;
    for(int i = liczba;i>0;i--){
        if(liczba % i == 0){
            licznik++;
        }
    }
    if(licznik>2){
        return 0;
    }
    else{
        return 1;
    }
}
