#ifndef CYCKEL_H
#define CYCKEL_H

#include "fordon.h"

class Cyckel : public Fordon
{
public:
    Cyckel();
    Cyckel(int hjul);

    // Fordon interface
public:
    void pakallaUppmarksamhet() override;
    void indikeraKommandeSvang() override;
    void svangVanster() override;
    void svangHoger() override;
    void korFrammat(float km) override;
};

#endif // CYCKEL_H
