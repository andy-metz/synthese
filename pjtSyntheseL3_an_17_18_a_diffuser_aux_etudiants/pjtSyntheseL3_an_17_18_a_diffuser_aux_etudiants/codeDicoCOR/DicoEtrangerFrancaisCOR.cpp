#include <stdlib.h>
#include  "DicoEtrangerFrancaisCOR.h"

DicoEtrangerFrancaisCOR::DicoEtrangerFrancaisCOR(DicoEtrangerFrancaisCOR * suivant) : suivant(suivant){}

/*virtual*/ DicoEtrangerFrancaisCOR::~DicoEtrangerFrancaisCOR() {/* je n'ai rien oublié*/}
/**
efface tous les éléments de la chaîne dico. En sortie dico == NULL
*/
/*static*/ void DicoEtrangerFrancaisCOR::effaceTout(DicoEtrangerFrancaisCOR * & dico)
{
if (dico)
	{
	DicoEtrangerFrancaisCOR::effaceTout(dico->suivant);
	delete dico; dico = NULL;
	}
}

/**
 * traduction utilisant la chaîne de responsabilité. algo récursif. parcourt la chaîne
 * 
 * */
const char * DicoEtrangerFrancaisCOR::traduit(const char * texte) const
{
const char * resultat;
resultat = this->traduit1(texte); // ce traducteur tente de traduire le texte

if (resultat != NULL)  // une traduction a été trouvée
    return resultat;

else    // échec de ce traducteur
    
    if (this->suivant != NULL)	// puisque il y a un suivant, on lui confie la tâche de traduction
        return this->suivant->traduit(texte);
    else // c'était le dernier traducteur, c'est donc un échec
        return NULL;
}

/** 
convertit toute la chaîne en string donc parcourt la chaîne
*/
const string DicoEtrangerFrancaisCOR::toString() const
{
	string r = "( \n" + this->toString1()+", \n";
	if (this->suivant)
		r += this->suivant->toString();
return r + ")";
}