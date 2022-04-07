#include "kortlek.h"
#include <chrono>
#include <random>

Kortlek::Kortlek() {

}

int Kortlek::antalKort() const {
    return m_korten.size();
}

Kort Kortlek::utplockatKort() {
    Kort card = m_korten.back();
    m_korten.pop_back();
    return card;
}

void Kortlek::aterstallKortlek() {
    m_korten.clear();
    Kort::Farg farger[4]{Kort::Hjarter, Kort::Spader, Kort::Ruter, Kort::Klover};
    for(int colour = 0; colour < 4; colour++) {
        for(int value = 1; value <= 13; value++){
            Kort kort(farger[colour], value);
            m_korten.push_back(kort);
        }
    }

    blanda();
    assert(m_korten.size() == 52);
}

void Kortlek::blanda() {
    static unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    static std::default_random_engine slumpgenerator(seed);
    std::shuffle(m_korten.begin(), m_korten.end(), slumpgenerator);
}

void Kortlek::aterstallBlandadKortlek() {
    m_korten.clear();
    Kort::Farg farger[4]{Kort::Hjarter, Kort::Spader, Kort::Ruter, Kort::Klover};
    for(int colour = 0; colour < 4; colour++) {
        for(int value = 1; value <= 13; value++){
            Kort kort(farger[colour], value);
            m_korten.push_back(kort);
        }
    }
    blanda();
    assert(m_korten.size() == 52);

}
