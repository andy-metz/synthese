#include <string.h>
#include <iostream>
#include "DicoAnglaisFrancaisCOR.h"

/*static*/ char * DicoAnglaisFrancaisCOR::t[TAILLE_ANGLAIS][2]  = {{"Hello","Salut"},
                                {"Nice to meet you" ,"Enchanté de faire votre connaissance"},
                                {"Mind your own business","Occupez vous de vos affaires"},
                                {"turnip","navet"},{"mouse","souris"}};  

DicoAnglaisFrancaisCOR::DicoAnglaisFrancaisCOR(DicoEtrangerFrancaisCOR * suivant) : DicoEtrangerFrancaisCOR(suivant){}

/**
 * savoir-faire de ce traducteur de la chaîne
 * */
const char * DicoAnglaisFrancaisCOR::traduit1(const char * texte) const
{
int i;
for ( i = 0; i < TAILLE_ANGLAIS; ++i)
    if (strcmp(texte,t[i][0]) == 0)
        return t[i][1];
	
return NULL;
}

/**
convertit uniquement ce maillon
*/
const string DicoAnglaisFrancaisCOR::toString1() const
{
int i;
string r;

for ( r = "", i = 0; i < TAILLE_ANGLAIS; ++i)
	r += (string)t[i][0] + " <---> " + t[i][1] + "\n";
return r;
}
