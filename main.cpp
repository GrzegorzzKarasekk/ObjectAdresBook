#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    char wybor;

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    while (true)
    {
        if (ksiazkaAdresowa.czyUzytkownikJestZalogowany() == false)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                if (ksiazkaAdresowa.czyWektorUzytkownikowJestPusty() == true)
                    break;
                else
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {

            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                cout << endl << "Funkcja chwilowo niedostepna. Za utrudnienia Przepraszamy :(" << endl << endl;
                system("pause");
                break;
            case '3':
                cout << endl << "Funkcja chwilowo niedostepna. Za utrudnienia Przepraszamy :(" << endl << endl;
                system("pause");
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                cout << endl << "Funkcja chwilowo niedostepna. Za utrudnienia Przepraszamy :(" << endl << endl;
                system("pause");
                break;
            case '6':
                cout << endl << "Funkcja chwilowo niedostepna. Za utrudnienia Przepraszamy :(" << endl << endl;
                system("pause");
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogujUzytkownika();
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu uzytkownika." << endl << endl;
                system("pause");
                break;
            }
        }
    }
    return 0;
}
