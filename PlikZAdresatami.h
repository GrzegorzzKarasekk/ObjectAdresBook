#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <fstream>

#include "MetodyPomocnicze.h"
#include "Adresat.h"

using namespace std;

class PlikZAdresatami
{
    const string nazwaPlikuZAdresatami;
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    bool czyPlikJestPusty();

public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};
    void dopiszAdresataDoPliku(Adresat adresat);

};

#endif
