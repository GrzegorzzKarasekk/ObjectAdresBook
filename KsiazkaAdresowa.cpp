#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
   uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika(int idZalogowanegoUzytkownika)
{
    return uzytkownikMenadzer.logowanieUzytkownika();
}

int KsiazkaAdresowa::dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    return adresatMenadzer.dodajAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);
}

void KsiazkaAdresowa::czyscWektor()
{
    adresatMenadzer.czyscWektor();
}

bool KsiazkaAdresowa::czyWektorjAdresatowestPusty()
{
    return adresatMenadzer.czyWektorAdresatowJestPusty();
}

int KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika)
{
    return adresatMenadzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    return uzytkownikMenadzer.wybierzOpcjeZMenuUzytkownika();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenadzer.wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika)
{
    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
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
