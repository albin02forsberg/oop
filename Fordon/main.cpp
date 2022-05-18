#include <iostream>
#include "fordon.h"
#include "bil.h"
#include "cyckel.h"

using namespace std;

void akEnRunda(Fordon &fordon){
    std::cout << "Åker en runda \n______________________\n";
    fordon.info();
    fordon.korFrammat(2);
    fordon.indikeraKommandeSvang();
    fordon.svangHoger();
    fordon.korFrammat(1.5);
    fordon.pakallaUppmarksamhet();
    fordon.korFrammat(0.5);
    fordon.svangVanster();
    fordon.korFrammat(0.1);
    std::cout << "Avslutar åk\n";
}

int main()
{
    Cyckel cyckel(2);
    Bil bil(4);

    akEnRunda(cyckel);
    akEnRunda(bil) ;

    return 0;
}
