#include "AdresatMenadzer.h"

void AdresatMenadzer::dodajAdresata()
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    if(plikZAdresatami.dopiszAdresataDoPliku(adresat))
        cout << "Nowy adresat zostal dodany" << endl;
    else
        cout << "Blad. Nie udalo sie dodac nowego adresata do pliku" << endl;
        system("pause");
}


Adresat AdresatMenadzer::podajDaneNowegoAdresata()
{
    Adresat adresat;

    string imie, nazwisko, numerTelefonu, email, adres;

    adresat.ustawId((plikZAdresatami.pobierzIdOstatniegoAdresata() + 1));
    adresat.ustawIdUzytkownika(ID_ZALOGOWANEGO_UZYTKOWNIKA);

    cout << "Podaj imie: ";
    imie = MetodyPomocnicze::wczytajLinie();
    imie = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie);
    adresat.ustawImie(imie);

    cout << "Podaj nazwisko: ";
    nazwisko = MetodyPomocnicze::wczytajLinie();
    nazwisko = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(nazwisko);
    adresat.ustawNazwisko(nazwisko);

    cout << "Podaj numer telefonu: ";
    numerTelefonu = MetodyPomocnicze::wczytajLinie();
    adresat.ustawNumerTelefonu(numerTelefonu);

    cout << "Podaj email: ";
    email = MetodyPomocnicze::wczytajLinie();
    adresat.ustawEmail(email);

    cout << "Podaj adres: ";
    adres = MetodyPomocnicze::wczytajLinie();
    adresat.ustawAdres(adres);

    return adresat;
}

void AdresatMenadzer::wyswietlWszystkichAdresatow()
{
    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (int i = 0; i < adresaci.size(); i++)
        {
            cout << adresaci[i].pobierzId() << endl;
            cout << adresaci[i].pobierzImie() << endl;
            cout << adresaci[i].pobierzNazwisko() << endl;
            cout << adresaci[i].pobierzNumerTelefonu() << endl;
            cout << adresaci[i].pobierzEmail() << endl;
            cout << adresaci[i].pobierzAdres() << endl;
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}

bool AdresatMenadzer::czyWektorAdresatowJestPusty()
{
    if (adresaci.empty() == true)
        return true;
    else
        return false;
}

void AdresatMenadzer::czyscWektor()
{
    adresaci.clear();
}
