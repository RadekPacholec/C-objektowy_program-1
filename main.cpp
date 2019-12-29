#include <iostream>

using namespace std;

class Zwierze
{
public:
    //atrubuty
    string gatunek;
    string imie;
    int wiek;
    //metody
    void dodaj_zwierze()
    {
        cout << "Dodawanie nowego zwierzecia do bazy "<<endl;
        cout << "podaj gatunek: ";
        cin >> gatunek;
        cout << "podaj imie : ";
        cin >> imie;
        cout << "podaj wiek : ";
        cin >> wiek;
    }
    void daj_glos()
    {
        if (gatunek=="kot") cout<<imie<<"lat "<<wiek<<": Miau!";
        else if (gatunek=="koza") cout<<imie<<"lat "<<wiek<<": Bee!";
        else if (gatunek=="krowa") cout<<imie<<"lat "<<wiek<<": Muuu!";
        else cout << "Nieznany gatunek";
    }
};

int main()
{
    Zwierze z1;

    z1.dodaj_zwierze();
    z1.daj_glos();

    return 0;
}
