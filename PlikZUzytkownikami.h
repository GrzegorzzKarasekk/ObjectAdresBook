#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

#include "MetodyPomocnicze.h"
#include "Uzytkownik.h"

using namespace std;

class PlikZUzytkownikami
{
    string nazwaPlikuZUzytkownikami;
    fstream plikTekstowy;

    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik nowyUzytkownik);

public:
    PlikZUzytkownikami();
    void dopiszUzytkownikaDoPliku(Uzytkownik nowyUzytkownik);

};

#endif
