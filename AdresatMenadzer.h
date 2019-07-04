#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikMenadzer.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenadzer
{
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

public:
    int idOstatniegoAdresata;
    int IdZalogowanegoUzytkownika;
    void czyscWektor();
    bool czyWektorJestPusty();
    AdresatMenadzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
    int dodajAdresata();
    Adresat podajDaneNowegoAdresata();

};

#endif
