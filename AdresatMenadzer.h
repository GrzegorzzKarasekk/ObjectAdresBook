#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include "Adresat.h"
#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikMenadzer.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenadzer
{
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

public:
    //int pobierzIdZalogowanegoUzytkownika();
    //int pobierzIdOstaniegoAdresata();
    AdresatMenadzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
    int dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void czyscWektor();
    bool czyWektorAdresatowJestPusty();
};

#endif
