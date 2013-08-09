// Attention ce fichier est aussi utilisé par avr-gcc !!
// Ne pas faire référence à des fonctions Qt
#ifndef VOITURE_H
#define VOITURE_H

#include "element.h"

// On ajoutera une classe Element (vide) pour avr-gcc.
// et l'utilisateur devra impérativement inclure element.h dans ses classes et les faire hériter de Element.
// Ou : l'inclusion et l'héritage est rajouté par le simulateur.
// Ou : polymorphisme ?

class Voiture : public Element
{
public:
    Voiture();

    void allumer();
    void eteindre();

    void rouler(float mm);
    void tourner(float deg);

private:
    Element* m_roueAv;
    Element* m_roueAr;
};

#endif // VOITURE_H
