#ifndef KORT_H
#define KORT_H

#include <string>

class Kort {
public:
    enum Farg{
        Klover, Ruter, Spader, Hjarter
    };

    Kort(Farg farg, int valor);
    Farg farg() const;
    int valor() const;
    std::string text() const;
private:
    std::string fargstrang() const;
    Farg m_farg;
    int m_valor;
};

#endif // KORT_H
