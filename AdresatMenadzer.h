#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZAdresatami.h"
using namespace std;

class AdresatMenadzer
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresaci);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);
    void edytujWybranaLinieWPlikuAdresaci(Adresat adresat);
    void usunWybranegoAdresataZPliku(Adresat adresat);
public:

    AdresatMenadzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
     : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void dodajAdresata();
    void czyscWektor();
    bool czyWektorAdresatowJestPusty();
    void wyswietlWszystkichAdresatow();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void edytujAdresata();
    void usunAdresata();

};

#endif
