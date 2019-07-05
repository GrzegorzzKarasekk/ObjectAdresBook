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
<<<<<<< HEAD
    int  logowanieUzytkownika();
=======
    int  logowanieUzytkownika(int idZalogowanegoUzytkownika);
>>>>>>> featureShowThePeople
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    int  dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void czyscWektor();
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    bool czyWektorjAdresatowestPusty();
    void wyswietlWszystkichAdresatow();


<<<<<<< HEAD
    int logowanieUzytkownika();
    char wybierzOpcjeZMenuGlownego();
=======
>>>>>>> featureShowThePeople
};

#endif
