#include "Kasa.h"
#include <iostream>
using namespace std;

Kasa::Kasa(float b_200, float b_100, float b_50, float b_20, float b_10, float m_5, float m_2, float m_1, float m_05, float m_02, float m_01, float m_005,float m_002, float m_001)
{
    banknot_200=b_200;
    banknot_100=b_100;
    banknot_50=b_50;
    banknot_20=b_20;
    banknot_10=b_10;
    moneta_5=m_5;
    moneta_2=m_2;
    moneta_1=m_1;
    moneta_05=m_05;
    moneta_02=m_02;
    moneta_01=m_01;
    moneta_005=m_005;
    moneta_002=m_002;
    moneta_001=m_001;
}

void Kasa::otworz(){
    if(zamkniety){
        zamkniety = false;
        cout << "Kasa została otwarta " << endl;
    } else cout<<"Kasa jest już otwarta! " << endl;
}

void Kasa::zamknij(){
    if(!zamkniety){
        zamkniety = true;
        cout << "Kasa została zamknięta " << endl;
    } else cout<<"Kasa jest już zamknięta! " << endl;
}

void Kasa::dodaj(){
    float a;
    float ilosc;
    if(!zamkniety){
        cout<<"Wpłać banknoty do kasy, wprowadź nominał w PLN (200, 100. 50, 20, 10, 5, 2, 1, 0.50, 0.20, 0.10, 0.05, 0.02, 0.01) " << endl;
        cin >> a;
        cout<<"Ile banknotów/monet wpłacasz? " << endl;
        cin >> ilosc;
        if(a*100 == 20000) banknot_200 = banknot_200+ilosc;
        else if(a*100 == 10000) banknot_100 = banknot_100+ilosc;
        else if(a*100 == 5000) banknot_50 = banknot_50+ilosc;
        else if(a*100 == 2000) banknot_20 = banknot_20+ilosc;
        else if(a*100 == 1000) banknot_10 = banknot_10+ilosc;
        else if(a*100 == 500) moneta_5 = moneta_5+ilosc;
        else if(a*100 == 200) moneta_2 = moneta_2+ilosc;
        else if(a*100 == 100) moneta_1 = moneta_1+ilosc;
        else if(a*100 == 100) moneta_05 = moneta_05+ilosc;
        else if(a*100 == 50) moneta_02 = moneta_02+ilosc;
        else if(a*100 == 10) moneta_01 = moneta_01+ilosc;
        else if(a*100 == 5) moneta_005 = moneta_005+ilosc;
        else if(a*100 == 2) moneta_002 = moneta_002+ilosc;
        else if(a*100 == 1) moneta_001 = moneta_001+ilosc;
    } else cout << "Kasa jest zamknięta, przed wprowadzeniem zmian otworz kase. " << endl;
}

void Kasa::odejmij(){
    float a;
    int ilosc;
    if(!zamkniety){
        cout<<"Wypłać banknoty z kasy, wprowadź nominał w PLN (200, 100. 50, 20, 10, 5, 2, 1, 0.50, 0.20, 0.10, 0.05, 0.02, 0.01) " << endl; cin >> a;
        cout<<"Ile banknotów/monet wypłacasz? " << endl; cin >> ilosc;
        if(a*100 == 20000) banknot_200 = banknot_200-ilosc;
        else if(a*100 == 10000) banknot_100 = banknot_100-ilosc;
        else if(a*100 == 5000) banknot_50 = banknot_50-ilosc;
        else if(a*100 == 2000) banknot_20 = banknot_20-ilosc;
        else if(a*100 == 1000) banknot_10 = banknot_10-ilosc;
        else if(a*100 == 500) moneta_5 = moneta_5-ilosc;
        else if(a*100 == 200) moneta_2 = moneta_2-ilosc;
        else if(a*100 == 100) moneta_1 = moneta_1-ilosc;
        else if(a*100 == 100) moneta_05 = moneta_05-ilosc;
        else if(a*100 == 50) moneta_02 = moneta_02-ilosc;
        else if(a*100 == 10) moneta_01 = moneta_01-ilosc;
        else if(a*100 == 5) moneta_005 = moneta_005-ilosc;
        else if(a*100 == 2) moneta_002 = moneta_002-ilosc;
        else if(a*100 == 1) moneta_001 = moneta_001-ilosc;
    } else cout << "Kasa jest zamknięta, przed wprowadzeniem zmian otworz kase. " << endl;
}

void Kasa::stan_kasy(){
    float stan_rzeczywisty = (banknot_200 * 200) + (banknot_100 * 100) + (banknot_50 * 50) + (banknot_20 * 20) + (banknot_10 * 10) + (moneta_5 * 5) + (moneta_2 * 2) + (moneta_1 * 1) + (moneta_05 * 0.5) +
                             (moneta_02 * 0.2) + (moneta_01 * 0.1) + (moneta_005 * 0.05) + (moneta_002 * 0.02) + (moneta_001 * 0.01);
    int stan_calkowity = (int)stan_rzeczywisty;
    cout << "Stan kasy wynosi: " << (int)stan_rzeczywisty << " złotych " << ((stan_rzeczywisty - (float)stan_calkowity)*100) << " groszy.";
}

void Kasa::ile_banknotow(){
    cout << "W kasie znajduje się: " << endl;
    cout << "- banknoty: " << banknot_200 << " po 200 zł, " << banknot_100 << " po 100zł. " << banknot_50 << " po 50 zł, " << banknot_20 << " po 20 zł, " << banknot_10 << " po 10 zł, " << endl;
    cout << "-  monety zł: " << moneta_5 << " po 5 zł, " << moneta_2 << " po 2 zł, " << moneta_1 << " po 1 zł, " << endl;
    cout << "- monety gr: " << moneta_05 << " po 50 gr, " << moneta_02 << " po 20 gr, " << moneta_01 << " po 10 gr, " << moneta_005 << " po 5 gr, " << moneta_002 << " po 2 gr, " << moneta_001 << " po 1 gr." << endl;
}


