#ifndef KORTLEK_H
#define KORTLEK_H
#include <kort.h>
#include <vector>


class Kortlek
{
public:
    Kortlek();
    int antalKort() const;
    Kort utplockatKort();
    void aterstallKortlek();
    void blanda();
    void aterstallBlandadKortlek();
private:
    std::vector<Kort> m_korten;
};

#endif // KORTLEK_H
