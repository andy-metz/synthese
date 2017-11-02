#pragma once

#include <string>

#include"DicoEtrangerFrancaisCOR.h"
#define TAILLE_ANGLAIS 5

class DicoAnglaisFrancaisCOR : public DicoEtrangerFrancaisCOR
{
static char * t[TAILLE_ANGLAIS][2];  

public : 

DicoAnglaisFrancaisCOR(DicoEtrangerFrancaisCOR * suivant);

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
