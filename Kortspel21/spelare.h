#ifndef SPELARE_H
#define SPELARE_H
#include <kort.h>
#include <korthand.h>

class Spelare {
public:
    Spelare();
    bool villSpela();
    bool villHakort() const;
    void tagEmotKort(const Kort &kort);
    void bankenTogKort(const Kort &kort) const;
    void kortlekenHarBlandats();
    void speletAvslutas(bool spelarenVan);

    const Korthand& korthand();

private:
    Korthand m_hand;
    int money;
};

#endif // SPELARE_H
