#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
   uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
    int idZalogowanegoUzytkownika;
    idZalogowanegoUzytkownika = uzytkownikMenadzer.logowanieUzytkownika();
    return idZalogowanegoUzytkownika;
}

