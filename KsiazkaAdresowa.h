#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikMenadzer.h"
#include "AdresatMenadzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenadzer uzytkownikMenadzer;
    AdresatMenadzer adresatMenadzer;
public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami): uzytkownikMenadzer(nazwaPlikuZUzytkownikami), adresatMenadzer(nazwaPlikuZAdresatami){
    uzytkownikMenadzer.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int  logowanieUzytkownika();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    int  dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void czyscWektor();
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    bool czyWektorjestPusty();

    int logowanieUzytkownika();
    char wybierzOpcjeZMenuGlownego();
};

#endif
