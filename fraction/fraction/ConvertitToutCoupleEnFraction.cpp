#include "ConvertitToutCoupleEnFraction.h"



ConvertitToutCoupleEnFraction::ConvertitToutCoupleEnFraction(ConvertitUneChaineParticuliereEnFraction * suiv)
{
	suivant = suiv;
}


const Fraction * ConvertitToutCoupleEnFraction::convertit1(const char * texte) const
{
	return new Fraction(3, 2);
}

const string ConvertitToutCoupleEnFraction::toString() const
{
	return string("Pourcentage en fraction");
}