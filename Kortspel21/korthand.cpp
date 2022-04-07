#include "korthand.h"
#include <iostream>

Korthand::Korthand() {

}

void Korthand::rensa() {
    m_korten.clear();
}

int Korthand::antalKort() const {
    return m_korten.size();
}

Kort Korthand::kort(int nr) const{
    return m_korten[nr];
}

void Korthand::stoppaInKort(const Kort &kort){
    m_korten.push_back(kort);
}

int Korthand::poang() const {
    int sum = 0;
    for(const Kort card : m_korten){
        sum += card.valor();
    }

    return sum;
}
