#include <string.h>
#include <string>

#include "DicoAllemandFrancaisCOR.h"

/*static*/ char * DicoAllemandFrancaisCOR::lAllemand [TAILLE_ALLEMAND] = {"maus","blum","hund"};
/*static*/ char * DicoAllemandFrancaisCOR::lFrancais [TAILLE_ALLEMAND] = {"souris","fleur","chien"};



DicoAllemandFrancaisCOR::DicoAllemandFrancaisCOR(DicoEtrangerFrancaisCOR * suivant) : DicoEtrangerFrancaisCOR(suivant) {}

/**
convertit uniquement ce maillon
*/
const string DicoAllemandFrancaisCOR::toString1() const
{
int i;
string r;
for( r = "", i = 0; i < TAILLE_ALLEMAND; ++i)
    r+="("+(string)lAllemand[i]+", "+lFrancais[i]+")";
return r;
}

/**
 * savoir-faire de ce traducteur de la chaîne
 * */
const char * DicoAllemandFrancaisCOR::traduit1(const char * texte) const
{
int i;

for ( i = 0; i < TAILLE_ALLEMAND; ++i)
    if (strcmp(texte,lAllemand[i]) == 0)
        return lFrancais[i];
return NULL;
}

