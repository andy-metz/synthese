#include <stdlib.h>
#include  "DicoEtrangerFrancaisCOR.h"

DicoEtrangerFrancaisCOR::DicoEtrangerFrancaisCOR(DicoEtrangerFrancaisCOR * suivant) : suivant(suivant){}

/*virtual*/ DicoEtrangerFrancaisCOR::~DicoEtrangerFrancaisCOR() {/* je n'ai rien oubli�*/}
/**
efface tous les �l�ments de la cha�ne dico. En sortie dico == NULL
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
 * traduction utilisant la cha�ne de responsabilit�. algo r�cursif. parcourt la cha�ne
 * 
 * */
const char * DicoEtrangerFrancaisCOR::traduit(const char * texte) const
{
const char * resultat;
resultat = this->traduit1(texte); // ce traducteur tente de traduire le texte

if (resultat != NULL)  // une traduction a �t� trouv�e
    return resultat;

else    // �chec de ce traducteur
    
    if (this->suivant != NULL)	// puisque il y a un suivant, on lui confie la t�che de traduction
        return this->suivant->traduit(texte);
    else // c'�tait le dernier traducteur, c'est donc un �chec
        return NULL;
}

/** 
convertit toute la cha�ne en string donc parcourt la cha�ne
*/
const string DicoEtrangerFrancaisCOR::toString() const
{
	string r = "( \n" + this->toString1()+", \n";
	if (this->suivant)
		r += this->suivant->toString();
return r + ")";
}