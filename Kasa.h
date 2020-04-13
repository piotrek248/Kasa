#ifndef KASA_H
#define KASA_H
#include <iostream>

using namespace std;

class Kasa
{
private:
    float banknot_200, banknot_100, banknot_50, banknot_20, banknot_10, moneta_5, moneta_2, moneta_1;
    float moneta_05, moneta_02, moneta_01, moneta_005, moneta_002, moneta_001;
    bool zamkniety = true;
public:
    Kasa(float=0, float=0, float=0, float=0, float=0, float=0, float=0, float=0, float=0, float=0, float=0, float=0, float=0, float=0);

    void otworz();
    void zamknij();
    void dodaj();
    void odejmij();
    void stan_kasy();
    void ile_banknotow();
};

#endif // KASA_H
