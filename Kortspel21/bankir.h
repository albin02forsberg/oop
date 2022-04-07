#ifndef BANKIR_H
#define BANKIR_H
#include <spelare.h>
#include <kortlek.h>

class Bankir
{
public:
    Bankir();
    void registreraSpelare(Spelare *pSpelare);
    bool harRegistreradSpelare() const;
    void spelaEnOmgång();
private:
    Kortlek m_kortlek;
    Spelare *m_Pspelare;
};

#endif // BANKIR_H
