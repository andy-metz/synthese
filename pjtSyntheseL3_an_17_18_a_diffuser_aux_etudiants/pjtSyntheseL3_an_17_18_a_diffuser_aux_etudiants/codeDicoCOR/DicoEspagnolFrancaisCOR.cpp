#include <string.h>
#include "DicoEspagnolFrancaisCOR.h"

DicoEspagnolFrancaisCOR::DicoEspagnolFrancaisCOR(DicoEtrangerFrancaisCOR * suivant) : DicoEtrangerFrancaisCOR(suivant)
{
l1.push_back("Un ratoncito verde");					l2.push_back("Une souris verte");
l1.push_back("Una cerveza bien fria");				l2.push_back("Une bière bien fraîche");
l1.push_back("Un biscocho de chocolate");			l2.push_back("Un gâteau au chocolat");
l1.push_back("El perrito negro");					l2.push_back("Le petit chien noir");
}

/**
 * savoir-faire de ce traducteur de la chaîne
 * */
const char * DicoEspagnolFrancaisCOR::traduit1(const char * texte) const
{
unsigned int i;

for ( i = 0; i < l1.size(); ++i)
    if (strcmp(texte,l1[i]) == 0) return l2[i];
return NULL;
}

/**
convertit uniquement ce maillon
*/
const string DicoEspagnolFrancaisCOR::toString1() const
{
unsigned int i;

string r;
for ( r = "", i = 0; i < l1.size(); ++i)
	r += (string)l1[i] +" <---> " + l2[i] + "\n";

return r;

}