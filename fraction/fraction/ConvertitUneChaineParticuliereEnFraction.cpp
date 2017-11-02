#include "ConvertitUneChaineParticuliereEnFraction.h"


ConvertitUneChaineParticuliereEnFraction::ConvertitUneChaineParticuliereEnFraction(){}

ConvertitUneChaineParticuliereEnFraction::ConvertitUneChaineParticuliereEnFraction(ConvertitUneChaineParticuliereEnFraction * suiv)
{
	suivant = suiv;
}

const Fraction * ConvertitUneChaineParticuliereEnFraction::convertit(const char * texte) const
{
	const Fraction * resultat;
	resultat = this->convertit1(texte); // ce convertisseur essaie de convertir la chaine en fraction

	if (resultat != NULL)  // une traduction a �t� trouv�e
		return resultat;

	else    // �chec de ce convertisseur

		if (this->suivant != NULL)	// puisque il y a un suivant, on lui confie la t�che de conversion
			return this->suivant->convertit(texte);
		else // c'�tait le dernier convertisseur, c'est donc un �chec
			return NULL;

}
