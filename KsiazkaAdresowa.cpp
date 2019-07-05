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

<<<<<<< HEAD
int KsiazkaAdresowa::dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    idOstatniegoAdresata = adresatMenadzer.dodajAdresata(idZalogowanegoUzytkownika, idOstatniegoAdresata);
    return idOstatniegoAdresata;
}
void KsiazkaAdresowa::czyscWektor()
{
    adresatMenadzer.czyscWektor();
}

bool KsiazkaAdresowa::czyWektorjestPusty()
{
    adresatMenadzer.czyWektorJestPusty();
}

int KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    adresatMenadzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    uzytkownikMenadzer.wybierzOpcjeZMenuUzytkownika();
}

=======
>>>>>>> featureChangePassword
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
