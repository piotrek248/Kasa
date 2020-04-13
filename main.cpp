#include <iostream>
#include "Kasa.h"

using namespace std;

int main()
{
    Kasa obiekt1;
    int wybor;
    cout << "Witaj w programie kasa, jaką czynność chcesz wykonać? 1 - otworz kase, 2 - dodaj banknoty, 3 - wypłać banknoty, 4 - wyświetl stan kasy, 5 - wyświetl ilość banknotów i monet, 0 - zamknij kase, 9 - zamknij program " << endl;
    do{
        cin >> wybor;

        switch (wybor) {

            case 1:
                obiekt1.otworz();
                break;
            case 2:
                obiekt1.dodaj();
                break;
            case 3:
                obiekt1.odejmij();
                break;
            case 4:
                obiekt1.stan_kasy();
                break;
            case 5:
                obiekt1.ile_banknotow();
                break;
            case 0:
                obiekt1.zamknij();
                break;
        }
    } while (wybor != 9);
    return 0;
}
