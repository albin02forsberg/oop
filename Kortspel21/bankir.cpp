#include "bankir.h"
#include <spelare.h>
#include <iostream>

Bankir::Bankir() {

}

void Bankir::registreraSpelare(Spelare *pSpelare) {
    m_Pspelare = pSpelare;
}

bool Bankir::harRegistreradSpelare() const {
    if(m_Pspelare != nullptr){
        return true;
    }
    return false;
}

void Bankir::spelaEnOmgång() {
    if(m_Pspelare == nullptr) {
        return;
    }

    if(m_kortlek.antalKort() < 15){
        m_kortlek.aterstallBlandadKortlek();
        m_Pspelare->kortlekenHarBlandats();
    }

    if(m_Pspelare->villSpela()){
        Kort card = m_kortlek.utplockatKort();
        m_Pspelare->tagEmotKort(card);
        std::cout << "Spelaren har: " << m_Pspelare->korthand().poang() << " poäng.\n";
        while(m_Pspelare->korthand().poang() < 21 && m_Pspelare->villHakort()){
            Kort card = m_kortlek.utplockatKort();
            m_Pspelare->tagEmotKort(card);
            std::cout << "Spelaren har: " << m_Pspelare->korthand().poang() << " poäng.\n";
        }

        const int playerPoints = m_Pspelare->korthand().poang();

        if(playerPoints > 21){
            m_Pspelare->speletAvslutas(false);
        } else if (playerPoints == 21){
            m_Pspelare->speletAvslutas(true);
        } else {
            Korthand bankhand;

            while(bankhand.poang() < 16){
                Kort card = m_kortlek.utplockatKort();
                bankhand.stoppaInKort(card);
                m_Pspelare->bankenTogKort(card);
            }

            const int bankPoints = bankhand.poang();
            bool spelarenVann = bankPoints > 21 || playerPoints>bankPoints;
            m_Pspelare->speletAvslutas(spelarenVann);
        }
    } else {
        m_Pspelare = nullptr;
    }
}
