#include "bil.h"
#include "fordon.h"
#include <iostream>

Bil::Bil() {

}

Bil::Bil(int hjul) : Fordon(hjul){

}

void Bil::pakallaUppmarksamhet() {
    std::cout << "tut tut\n";
}

void Bil::indikeraKommandeSvang() {
    std::cout << "Blinkar\n";
}

void Bil::svangVanster() {
    std::cout << "Svänger vänster\n";
}

void Bil::svangHoger() {
    std::cout << "Svänger höger\n";
}

void Bil::korFrammat(float km) {
    std::cout << "Gasar på i " << km << " km\n";
}
