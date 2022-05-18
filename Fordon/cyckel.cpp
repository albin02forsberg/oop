#include "cyckel.h"
#include "fordon.h"
#include <iostream>

Cyckel::Cyckel(){

}

Cyckel::Cyckel(int hjul) : Fordon(hjul){

}

void Cyckel::pakallaUppmarksamhet() {
    std::cout << "Pling pling\n";
}

void Cyckel::indikeraKommandeSvang() {
    std::cout << "Sträcker ut arm\n";
}

void Cyckel::svangVanster() {
    std::cout << "Vickar åt vänster och vrider styrstången\n";
}

void Cyckel::svangHoger() {
    std::cout << "Vickar åt höger och vrider styrstången\n";
}

void Cyckel::korFrammat(float km) {
    std::cout << "Trampar vidare " << km << " km\n";
}
