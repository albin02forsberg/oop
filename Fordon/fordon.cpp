#include "fordon.h"
#include <iostream>

Fordon::Fordon(){

}

Fordon::Fordon(int hjul) {
    m_antalHjul = hjul;
}

void Fordon::info() const {
   std::cout << "Ett fordon med " << m_antalHjul << " hjul.\n";
}
