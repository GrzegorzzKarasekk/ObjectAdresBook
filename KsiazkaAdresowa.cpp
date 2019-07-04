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


int KsiazkaAdresowa::dodajAdresata()
{
    int idOstatniegoAdresata;
    idOstatniegoAdresata = adresatMenadzer.dodajAdresata();
    return idOstatniegoAdresata;
}
void KsiazkaAdresowa::czyscWektor()
{
    adresatMenadzer.czyscWektor();
}


char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    uzytkownikMenadzer.wybierzOpcjeZMenuUzytkownika();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}
