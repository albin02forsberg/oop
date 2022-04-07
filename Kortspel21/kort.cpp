#include "kort.h"

Kort::Kort(Farg farg, int valor) {
    m_farg = farg;
    m_valor = valor;
}

Kort::Farg Kort::farg() const {
    return m_farg;
}

int Kort::valor() const {
    return m_valor;
}

std::string Kort::text() const {
    static const char* valorNamn [14]{"finns ej", "ess", "två", "tre",
                                     "fyra", "fem", "sex", "sju", "åtta", "nio",
                                     "tio", "knäckt", "dam", "kung"};
    return fargstrang() + " " + valorNamn[m_valor];
}

std::string Kort::fargstrang() const {
    switch (m_farg) {
    case(Klover):
        return "Klöver";
        break;
    case Ruter:
        return "Ruter";
        break;
    case Spader:
        return "Spader";
        break;
    case Hjarter:
        return "Hjärter";
        break;
    }
}
