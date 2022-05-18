#ifndef FORDON_H
#define FORDON_H


class Fordon {
public:
    Fordon();
    Fordon(int hjul);
    virtual void pakallaUppmarksamhet() =0;
    virtual void indikeraKommandeSvang() =0;
    virtual void svangVanster() =0;
    virtual void svangHoger() =0;
    virtual void korFrammat(float km) =0;
    void info() const;

private:
    int m_antalHjul;
};

#endif // FORDON_H
