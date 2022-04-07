#include "spelare.h"
#include "minafunktioner.h"
#include <iostream>

Spelare::Spelare() {
    money = 100;
}

bool Spelare::villSpela() {
    return boolFranAnvandare("Vill du spela?");
}

bool Spelare::villHakort() const {
    return boolFranAnvandare("Vill du ha kort?");
}

void Spelare::tagEmotKort(const Kort &kort) {
    m_hand.stoppaInKort(kort);
    std::cout << "Du fick kortet: " << kort.text() << std::endl;
}

void Spelare::bankenTogKort(const Kort &kort) const {
    std::cout << "Banken tog kortet: " << kort.text() << std::endl;
}

void Spelare::kortlekenHarBlandats() {
    std::cout << "Kortleken har blandats!" << std::endl;
}

void Spelare::speletAvslutas(bool spelarenVan) {
    if(spelarenVan){
        std::cout << "Du vann!" << std::endl;
    } else {
        std::cout << "Du förlorade!" << std::endl;
    }

    m_hand.rensa();
}

const Korthand &Spelare::korthand() {
    return m_hand;
}
