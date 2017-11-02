#include "ConvertitPourcentageEnFraction.h"
#include <string>

ConvertitPourcentageEnFraction::ConvertitPourcentageEnFraction(ConvertitUneChaineParticuliereEnFraction * suiv)
{
	suivant = suiv;
}


const Fraction * ConvertitPourcentageEnFraction::convertit1(const char * texte) const
{
	return new Fraction(2, 2);
}



const string ConvertitPourcentageEnFraction::toString() const
{
	return string("couple en fraction");
}