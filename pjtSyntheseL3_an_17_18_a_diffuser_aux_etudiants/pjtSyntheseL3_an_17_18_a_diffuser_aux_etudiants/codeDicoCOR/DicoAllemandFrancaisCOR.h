#pragma once

#include "DicoEtrangerFrancaisCOR.h"

using namespace std;

#define TAILLE_ALLEMAND 3
class DicoAllemandFrancaisCOR : public DicoEtrangerFrancaisCOR
{
static char * lAllemand [TAILLE_ALLEMAND];
static char * lFrancais [TAILLE_ALLEMAND];

public :

DicoAllemandFrancaisCOR(DicoEtrangerFrancaisCOR * suivant);

/**
convertit uniquement ce maillon
*/
virtual const string toString1() const;

/**
 * savoir-faire de ce traducteur de la chaîne
 * */
protected:
virtual const char * traduit1(const char * texte) const;
};
